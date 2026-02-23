# UVa 00118 - Mutant Flatworld Explorers

## Problem
Simulate robots moving on a bounded grid, tracking where they fall off and leaving "scents" to prevent future robots from falling at the same spot.

## Solution
Direct simulation.

## Complexity
Let m = number of robots, k = max command string length (≤ 100).
- Time: O(m × k)
- Space: O(X × Y) for the scent grid
