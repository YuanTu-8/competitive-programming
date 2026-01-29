# UVa 00105 - The Skyline Problem

## Problem
Given a set of rectangular buildings, output the silhouette (skyline) as coordinate pairs where height changes.

## Solution
Use a sweep line algorithm with events: each building creates a "start" event (positive height) and an "end" event (negative height). Sort events by x-coordinate, processing taller buildings first at the same position. Maintain active heights in a multiset; whenever the maximum height changes, output a new skyline point.

## Complexity
- Time: O(n log n) — sorting events and multiset operations, where n = number of buildings
- Space: O(n) — storing events and active heights, where n = number of buildings