# LeetCode 2629 - Function Composition

## Problem
Given an array of functions, return a new function that composes them right-to-left.

## Solution
Use `reduceRight` to apply functions from right to left, with the input as initial value. Empty array naturally returns identity function since `reduceRight` returns the initial value when array is empty.

## Complexity
Let n = number of functions in the array.
- Time: O(n)
- Space: O(1)