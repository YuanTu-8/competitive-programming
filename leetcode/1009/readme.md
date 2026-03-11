# LeetCode 1009 - Complement of Base 10 Integer

## Problem
Given an integer, return its bitwise complement (flip all bits in its binary representation).

## Solution
XOR `n` with a bitmask of all 1s that has the same bit length as `n`, which flips every bit.

## Complexity
- Time: O(1)
- Space: O(1)
