# UVa 11321 - Sort! Sort!! and Sort!!!

## Problem
Sort integers by their remainder modulo M, with odd numbers before even within the same remainder group, odd sorted descending, and even sorted ascending.

## Solution
Build a composite sort key as a tuple of (remainder mod M, parity flag, adjusted value) where odd numbers use negated value for descending order and even numbers use raw value for ascending order. Use `std::sort` with this tuple-based comparator.

## Complexity
Let n = number of integers per test case.
- Time: O(n log n)
- Space: O(n)
