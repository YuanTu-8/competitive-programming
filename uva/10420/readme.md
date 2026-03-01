# UVa 10420 - List of Conquests

## Problem
Count the number of women from each country and output the results in alphabetical order.

## Solution
Use `std::map` to accumulate counts per country, leveraging its automatic key ordering for sorted output.

## Complexity
Let n = number of input lines.
- Time: O(n log n) — each map insertion/lookup is O(log n)
- Space: O(n)
