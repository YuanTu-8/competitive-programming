# LeetCode 2667 - Create Hello World Function

## Problem
Write a function that returns another function which always returns "Hello World".

## Solution
Use a higher-order function that returns a closure. The inner function ignores all arguments and returns a fixed string.

## Complexity
- Time: O(1)
- Space: O(1)