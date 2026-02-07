# LeetCode 2722 - Join Two Arrays by ID

## Problem
Merge two arrays of objects by their `id` field, with `arr2` values overriding `arr1` on conflicts, and return the result sorted by `id`.

## Solution
Use a Map keyed by `id` to index all objects from `arr1`, then iterate `arr2` and merge each object into the map entry using the spread operator (which naturally gives `arr2` priority). Finally, extract and sort by `id`.

## Complexity
Let n = total number of objects across both arrays, k = average number of keys per object.
- Time: O(nk + n log n) — O(nk) for merging via spread, O(n log n) for sorting
- Space: O(nk)