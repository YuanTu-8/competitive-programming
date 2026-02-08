# LeetCode 2625 - Flatten Deeply Nested Array

## Problem
Given a multi-dimensional array and a depth `n`, return a flattened version where sub-arrays are expanded only up to depth `n`.

## Solution
Recursively traverse the array: if an element is a sub-array and remaining depth > 0, recurse into it with depth - 1 and spread the results; otherwise, push the element as-is.

## Complexity
Let m = total number of elements across all nesting levels.
- Time: O(m)
- Space: O(m)