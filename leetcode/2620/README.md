# LeetCode 2620 - Counter

## Problem
Create a counter function that returns n, then n+1, then n+2, etc. on each call.

## Solution
Use a closure to capture the parameter `n` and return its value with post-increment on each call.

## Complexity
- Time: O(1) per call
- Space: O(1)