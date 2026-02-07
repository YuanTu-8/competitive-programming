# LeetCode 2724 - Sort By

## Problem
Sort an array based on a ranking function that maps each element to a number.

## Solution
Use `Array.sort()` with a custom comparator that compares `fn(a) - fn(b)`.

## Complexity
Let n = length of the input array.
- Time: O(n log n)
- Space: O(log n) — for the sorting algorithm's call stack