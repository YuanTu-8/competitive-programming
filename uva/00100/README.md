# UVa 00100 - The 3n + 1 Problem

## Problem
Find the maximum cycle length of the 3n+1 sequence for all numbers in a given range.

## Approach
For each number in the range, follow the 3n+1 rules (odd → 3n+1, even → n/2) until reaching 1. Keep track of the maximum cycle length found.

To avoid repeating calculations, store the results in a hash map. When computing a number's cycle length, also store all intermediate numbers we encounter along the way.

## Algorithm
Loop through each number and calculate cycle length, using a hash map to remember previous results.

## Complexity
- Time: O(n) with memoization, where n is the range size. Each cycle length is computed once and cached for O(1) lookup.
- Space: O(m), where m is the number of unique values stored in the memo table.

## Key Insight
1. The output must preserve the original input order (i, j) even though we process min to max internally.
2. Store not just the cycle length for each number, but also all the intermediate numbers we pass through.
