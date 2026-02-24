# LeetCode 2666 - Allow One Function Call

## Problem
Return a wrapper function that ensures the original function is called at most once.

## Solution
Use closure to track whether the function has been called, returning the result on first call and `undefined` thereafter.

## Complexity
- Time: O(1)
- Space: O(1)