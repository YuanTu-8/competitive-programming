# UVa 00100 - The 3n+1 Problem

## Problem
Find the maximum Collatz cycle length among all integers in range [i, j].

## Solution
Simulate each number's cycle directly. Since multiple queries may hit the same numbers repeatedly, use memoization to avoid redundant calculations. Watch out: input may have i > j, but output must preserve the original order.

## Complexity
Let n = range size, m = unique values encountered during computation.
- Time: O(n) amortized
- Space: O(m) for memoization cache