# LeetCode 2621 - Sleep

## Problem
Implement a sleep function that resolves a Promise after a given number of milliseconds.

## Solution
Wrap `setTimeout` in a `Promise` that resolves after the specified delay.

## Complexity
- Time: O(1)
- Space: O(1)