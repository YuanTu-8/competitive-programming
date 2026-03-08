# LeetCode 1758 - Minimum Changes To Make Alternating Binary String

## Problem
Find the minimum number of flips to make a binary string alternating.

## Solution
Count mismatches against the "0101..." pattern. The other pattern's mismatch count is the complement (`length - count`). Return the minimum of the two.

## Complexity
Let n = length of string `s`.
- Time: O(n)
- Space: O(1)
