# LeetCode 2637 - Promise Time Limit

## Problem
Wrap an async function with a timeout that rejects with "Time Limit Exceeded" if the function doesn't complete in time.

## Solution
Use `Promise.race()` to race the original function against a timeout promise. Whichever settles first determines the outcome.

## Complexity
Let t = timeout duration.
- Time: O(1) — wrapper creation is constant time
- Space: O(1) — only creates one timeout promise per call