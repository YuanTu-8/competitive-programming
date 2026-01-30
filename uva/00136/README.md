# UVa 00136 - Ugly Numbers

## Problem
Find the 1500th ugly number, where ugly numbers are positive integers whose only prime factors are 2, 3, or 5.

## Solution
Use a three-pointer technique to generate ugly numbers in ascending order. Each pointer tracks the position of the smallest ugly number that, when multiplied by its corresponding factor (2, 3, or 5), produces a new candidate. At each step, take the minimum of the three candidates as the next ugly number, and advance any pointer whose candidate was chosen (handles duplicates like 2×3 = 3×2).

## Complexity
- Time: O(n), where n = 1500
- Space: O(n)