# LeetCode 1536 - Minimum Swaps to Arrange a Binary Grid

## Problem
Find the minimum adjacent-row swaps to make all cells above the main diagonal zero in a binary grid, or return -1 if impossible.

## Solution
Reduce each row to its trailing zero count. Greedily, for row i, find the nearest row at or below i with at least (n-1-i) trailing zeros, then bubble it up via adjacent swaps.

## Complexity
Let n = side length of the grid.
- Time: O(n²)
- Space: O(n)
