# UVa 00100 - The 3n+1 Problem

## Problem
Find the maximum Collatz cycle length for all integers in a given range [i, j].

## Solution
Use memoization to cache computed cycle lengths.

## Complexity
Let n = size of the range, L = average cycle length.
- Time: O(n × L) worst case, but memoization makes it near O(n) amortized across queries
- Space: O(unique numbers encountered in all cycles)
