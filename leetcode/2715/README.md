# LeetCode 2715 - Timeout Cancellation

## Problem
Return a cancel function that can prevent a scheduled function from executing.

## Solution
Use `setTimeout` to schedule the function call, and return a closure that captures the timer ID to call `clearTimeout` when invoked.

## Complexity
- Time: O(1)
- Space: O(1)