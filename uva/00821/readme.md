# UVa 00821 - Page Hopping

## Problem
Given a directed graph, compute the average shortest path length between all distinct pairs of nodes.

## Solution
Use Floyd-Warshall on the sparse node set to get all-pairs shortest paths, then average the distances over all ordered pairs.

## Complexity
Let n = number of distinct nodes.
- Time: O(n³)
- Space: O(n²)
