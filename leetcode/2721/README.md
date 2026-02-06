# LeetCode 2721 - Execute Asynchronous Functions in Parallel

## Problem
Implement `Promise.all` from scratch: execute an array of async functions in parallel, resolve with all results in order, or reject with the first error.

## Solution
Manually track a resolved count. Fire all promises simultaneously, store each result by index to preserve order, and resolve the outer promise once the counter reaches the total. Short-circuit on the first rejection via `.catch(reject)`.

## Complexity
Let n = number of functions.
- Time: O(n) — each function is invoked exactly once
- Space: O(n) — for the results array