# LeetCode 2634 - Filter Elements from Array

## Problem
Implement a custom `filter` function that returns elements where the callback returns a truthy value.

## Solution
Iterate through the array, apply the callback to each element with its index, and collect elements that pass the truthy check.

## Complexity
Let n = length of the input array.
- Time: O(n)
- Space: O(n)