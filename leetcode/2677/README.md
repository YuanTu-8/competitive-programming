# LeetCode 2677 - Chunk Array

## Problem
Given an array and a chunk size, split the array into subarrays of the specified size.

## Solution
Iterate through the array with step size equal to chunk size, using `slice` to extract each chunk.

## Complexity
Let n = length of the input array.
- Time: O(n)
- Space: O(n)