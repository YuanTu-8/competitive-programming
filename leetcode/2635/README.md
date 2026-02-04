# LeetCode 2635 - Apply Transform Over Each Element in Array

## Problem
Implement a custom `map` function that applies a transformation function to each element without using the built-in `Array.map`.

## Solution
Iterate through the array, apply `fn(element, index)` to each element, and collect results into a new array.

## Complexity
Let n = length of the input array.
- Time: O(n)
- Space: O(n)