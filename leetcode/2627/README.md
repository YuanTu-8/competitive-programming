# LeetCode 2627 - Debounce

## Problem
Implement a debounce function that delays execution until `t` milliseconds after the last call.

## Solution
Use a closure to store the timer ID. On each call, clear any existing timer and set a new one.

## Complexity
- Time: O(1) per call
- Space: O(1)