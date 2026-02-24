# LeetCode 2703 - Return Length of Arguments Passed

## Problem
Return the number of arguments passed to a function.

## Solution
Use rest parameter syntax to collect all arguments into an array, then return its length.

## Complexity
Let n = number of arguments passed.
- Time: O(1)
- Space: O(n) — rest parameter creates an array to store all arguments