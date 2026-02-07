# LeetCode 2724 - Sort By

## Problem
Sort an array based on the return value of a provided function.

## Solution
Use a Schwartzian transform (decorate-sort-undecorate): pre-compute `fn(item)` for each element, sort by the cached keys, then extract the original values.

## Complexity
Let n = length of the input array.
- Time: O(n log n) — dominated by the sort
- Space: O(n) — for the decorated array