# UVa 291 - The House Of Santa Claus

## Problem
Find all ways to draw a house shape (5 nodes, 8 edges) in one stroke starting from node 1, visiting every edge exactly once.

## Solution
Use DFS with backtracking to enumerate all Eulerian paths.

## Complexity
Let n = number of nodes (5), e = number of edges (8).
- Time: O(n! × e) worst case for enumeration and printing
- Space: O(n²) for the edge-used matrix
