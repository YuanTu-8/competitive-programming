# LeetCode 2723 - Add Two Promises

## Problem
Given two promises, return a new promise that resolves to the sum of their resolved values.

## Solution
Use `Promise.all` to await both promises in parallel, then return their sum.

## Complexity
- Time: O(1)
- Space: O(1)