# UVa 00352 - The Seasonal War

## Problem
Count the number of connected components of '1' cells (war eagles) in an n×n binary grid, where adjacency includes all 8 directions.

## Solution
Count connected components via DFS flood fill on 8-directional neighbors, marking visited cells by overwriting them with '0'.

## Complexity
Let n = side length of the grid.
- Time: O(n²)
- Space: O(n²)
