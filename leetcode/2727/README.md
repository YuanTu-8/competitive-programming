# LeetCode 2727 - Is Object Empty

## Problem
Given an object or array, return true if it has no keys or elements.

## Solution
Use `for...in` to attempt iterating over the object's keys. If the loop body executes, at least one key exists, so return false immediately. If the loop never executes, the object is empty.

## Complexity
- Time: O(1) — exits after checking at most one key
- Space: O(1) — no additional data structures created