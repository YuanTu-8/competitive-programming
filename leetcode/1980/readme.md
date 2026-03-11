# LeetCode 1980 - Find Unique Binary String

## Problem
Given an array of unique binary strings of length n, find any binary string of the same length not present in the array.

## Solution
Use Cantor's diagonal argument: for each index i, flip the i-th character of nums[i].

## Complexity
Let n = length of nums.
- Time: O(n)
- Space: O(n)
