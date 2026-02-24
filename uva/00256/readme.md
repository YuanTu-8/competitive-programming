# UVa 00256 - Quirksome Squares

## Problem
Find all n-digit numbers (n = 2, 4, 6, 8) where splitting the number into two equal halves and squaring their sum yields the original number.

## Solution
Let `sum = left + right`. The condition `sum² = left * halfBase + right` rearranges to `sum * (sum - 1) = left * (halfBase - 1)`. Enumerate `sum` from 0 to `halfBase - 1` and check divisibility to find all quirksome squares.

## Complexity
Let h = 10^(digits/2), the half-base.
- Time: O(h) per query
- Space: O(1)
