# LeetCode 2704 - To Be Or Not To Be

## Problem
Implement a test assertion function `expect` that returns an object with `toBe` and `notToBe` methods for strict equality checking.

## Solution
Use closure to capture the initial value, then return an object with two methods that compare against the captured value using strict equality (`===`/`!==`).

## Complexity
- Time: O(1)
- Space: O(1)