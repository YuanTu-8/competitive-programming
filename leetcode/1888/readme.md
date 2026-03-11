# LeetCode 1888 - Minimum Number of Flips to Make the Binary String Alternating

## Problem
Given a binary string with rotation (type-1) and flip (type-2) operations, find the minimum flips to make it alternating.

## Solution
Double the string to simulate all rotations, then slide a window of size n across it. Track the mismatch count against one alternating pattern; the mismatch count against the other pattern is always `n - count` (since every position mismatches exactly one of the two patterns). Take the minimum across all windows.

## Complexity
Let n = length of the input string.
- Time: O(n)
- Space: O(n) — for the doubled string
