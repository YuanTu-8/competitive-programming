# LeetCode 2623 - Memoize

## Problem
Implement a memoization wrapper that caches function results based on input arguments.

## Solution
Use a closure to maintain a Map cache across calls. Convert arguments to a string key using `join(',')` for O(1) lookup. Return cached result if exists, otherwise compute, store, and return.

## Complexity
Let n = number of arguments per call, k = number of unique argument combinations cached.
- Time: O(n) for key generation; O(1) for cache lookup
- Space: O(k × n)