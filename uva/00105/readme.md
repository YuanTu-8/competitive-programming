# UVa 00105 - The Skyline Problem

## Problem
Given building rectangles, output the skyline contour as coordinate pairs.

## Solution
Line sweep with a multiset. Each building generates two events (start and end). Process events left-to-right, maintaining active heights in a multiset. When the maximum height changes, output the current x-coordinate and new maximum height.

## Complexity
Let n = number of buildings.
- Time: O(n log n)
- Space: O(n)
