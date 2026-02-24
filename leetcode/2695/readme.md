# LeetCode 2695 - Array Wrapper

## Problem
Create a class that supports addition via the `+` operator (summing all elements) and string conversion via `String()`.

## Solution
Override `valueOf` to return the element sum and `toString` to return the bracket-formatted string. Pre-compute the sum in the constructor to avoid redundant calculation on each `+` operation.

## Complexity
Let n = length of the input array.
- Time: O(n) for construction, O(1) for `valueOf`, O(n) for `toString`
- Space: O(n)