# LeetCode 2705 - Compact Object

## Problem
Recursively remove all falsy values from a given object or array.

## Solution
Recursively traverse the structure, branching on `Array.isArray` to handle arrays and plain objects separately. For arrays, filter out falsy values then recurse into nested structures; for plain objects, do the same via `Object.entries` + `Object.fromEntries`.

## Complexity
Let n = total number of values across all nesting levels.
- Time: O(n)
- Space: O(n) — for the recursively constructed output