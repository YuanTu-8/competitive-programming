# LeetCode 1545 - Find Kth Bit in Nth Binary String

## Problem
Given two integers `n` and `k`, find the k-th bit in the n-th binary string constructed by the recursive rule S(i) = S(i-1) + "1" + reverse(invert(S(i-1))).

## Solution
Recurse on the structure of the string. The string of length 2^n - 1 has a middle bit always equal to "1". If k falls in the left half, recurse directly on S(n-1). If k falls in the right half, map it to the mirrored reversed in S(n-1) and flip the result.

## Complexity
Let n = the given parameter n.
- Time: O(n)
- Space: O(n) — recursion depth
