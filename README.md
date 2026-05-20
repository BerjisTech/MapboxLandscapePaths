# Mapbox Landscape Paths

Road-following mission paths and A* routing on top of imported Mapbox landscapes. Drop a `MissionPathActor` in the level, set a start and end, click Compute — get a polyline that follows real roads on your imported terrain. Same data is exposed for NPC pathfinding.

**Requires the [MapboxLandscape](../MapboxLandscape) plugin** — this plugin is built on its coordinate system and API key. Install MapboxLandscape first.

Tested on UE 5.7.

## Install

1. Make sure `MapboxLandscape` is installed and enabled.
2. Drop the `MapboxLandscapePaths` folder into your project's `Plugins/` directory.
3. Launch the editor — it'll offer to compile both plugins on first run.

Project Settings, including the API key, are shared with `MapboxLandscape`.

## Use it

### 1. Bake the road graph (one-time)

After you've imported landscape tiles with the MapboxLandscape importer, you need to bake the road network for the same area.

**Tools → Mapbox Landscape → Bake Mapbox Road Graph**

This fetches Mapbox Streets v8 vector tiles for the active importer's bounds, parses every `highway=*` feature into nodes and edges, and saves the result to `/Game/MapboxLandscapePaths/RG_Roads.uasset`. Takes seconds for small areas, ~30s for a city.

You only need to do this **once per game world** — adding new missions later is zero-cost and zero-code.

To re-open the folder: **Tools → Mapbox Landscape → Show Road Graph in Content Browser**.

### 2. Create a mission path

1. Drag an `AMissionPathActor` into the level (Place Actors → Mapbox Landscape Paths → Mission Path).
2. In Details:
   - `Graph` — point at your baked `RG_Roads` asset.
   - Move the **StartHandle** and **EndHandle** scene components in the viewport (they show as gizmos under the actor).
   - (Optional) `IntermediateWaypoints[]` — extra stops the route passes through in order.
   - `Output Asset` (optional) — a `UPathDefinition` data asset to bake the result into for runtime/UI.
3. Click **Compute Path** in Details.

The result is drawn as a debug spline component on the actor. If you assigned an `OutputAsset`, the polyline is also baked to that data asset as lat/lng pairs (resilient to landscape moves).

## NPCs

Same data, same code path:

```cpp
TArray<FVector> Path = UMissionPathLibrary::FindPath(
    this, RoadGraphAsset, NpcLocation, Destination,
    /*SnapDistance=*/200.f, /*bSnapToGround=*/true);
// hand to vehicle controller
```

The A* uses class-weighted edges (motorways preferred, pedestrian/service penalized) and respects one-way restrictions from OSM.

## Adding missions later

Once `RG_Roads` is baked, every new mission's path is one button-click:

1. Drop a new `MissionPathActor`.
2. Move Start/End to wherever the mission begins/ends.
3. Click **Compute Path**.

No code changes, no plugin recompile, no re-bake of the road graph. Just data.

## What gets stored

```
F:\YourProject\Content\MapboxLandscapePaths\
└── RG_Roads.uasset                    ← baked road graph (built once per world)

# Per-mission path definitions (created as you add them):
F:\YourProject\Content\Missions\
└── P_*.uasset                         ← UPathDefinition (lat/lng polyline + style)
```

## Path definition

`UPathDefinition` is a `UDataAsset` holding:

- `Points[]` — lat/lng polyline (canonical, world-independent).
- `Style` — Solid / Dashed / Arrows / Pulse.
- `Color` / `WidthMeters` — visual config.
- `MissionTag` — your mission system can filter by this.
- `Source` — Manual / RoadGraph / MapboxDirections (the future fallback).

Resolve to world positions at runtime via `UMissionPathLibrary::ResolvePathPoints()`. The path tracks the importer's `ImportOrigin` automatically.

## Road classes

Edges in `RG_Roads` carry a class enum that drives the A* cost:

| Class | Cost multiplier |
|---|---|
| Motorway | 0.7 |
| Trunk | 0.8 |
| Primary | 0.9 |
| Secondary | 1.0 |
| Tertiary | 1.1 |
| Residential | 1.3 |
| Service | 1.8 |
| Track | 2.5 |
| Pedestrian | 3.0 |

(Lower = preferred. Edit `URoadGraphAsset::GetClassCostMultiplier` to retune.)

## Plugin architecture (for contributors)

- `URoadGraphAsset` — lat/lng-native graph asset with spatial index (Haversine + bucketed grid for nearest-node).
- `UPathDefinition` — lat/lng polyline asset with style metadata.
- `AMissionPathActor` — placeable actor with Start/End scene components and a "Compute Path" button.
- `UMissionPathLibrary` — Blueprint-exposed library:
  - `GetActiveMapboxContext` — finds the MapboxLandscape importer config and snapshots its bbox/zoom/anchor.
  - `LatLngToWorld` / `WorldToLatLng` — coordinate transforms that match the landscape's tile-centered placement.
  - `FindPath` — A* on the road graph (class-weighted, Haversine heuristic).
  - `BakeRoadGraphFromActiveContext` — async MVT fetch + parse → URoadGraphAsset.
- `MissionPaths` module registers the Tools menu entries.

## Common issues

| Symptom | Cause / fix |
|---|---|
| Toast: "No active Mapbox importer config" | Open the Mapbox Landscape Importer first and configure coordinates |
| Toast: "API key is empty" | Project Settings → Plugins → Mapbox Landscape → API Key |
| `FindPath` returns empty array | Start/End not within `SnapDistanceMeters` of any road. Raise the snap distance or check the area is covered |
| Path goes through buildings | The road graph is OSM-based; gaps mean missing data upstream. Try a higher bake zoom or accept the limitation |

## License

Same as your project. Mapbox API usage is governed by Mapbox's terms.
