# UVa 00256 - Quirksome Squares

## Problem
Find all n-digit numbers where splitting into two equal halves and squaring their sum yields the original number.

## Solution
Enumerate all (left, right) half pairs where each ranges from 0 to 10^(n/2) - 1, checking if (left + right)² equals the full number. Use lazy evaluation with caching: compute results for a given digit count only on first query, then return cached results for subsequent queries. This avoids redundant computation when the same digit count appears multiple times in input.

## Complexity
Let n = number of digits, k = count of quirksome squares for a given n, q = number of queries.
- Time: O(10^n) per unique n (computed once), O(k) for repeated queries
- Space: O(K) where K = total cached answers across all queried digit counts