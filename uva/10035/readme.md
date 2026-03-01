# UVa 10035 - Primary Arithmetic

## Problem
Count the number of carry operations when adding two integers column by column.

## Solution
Extract digits from right to left, compute the column sum (including the carry from the previous column), and count how many times a carry occurs.

## Complexity
Let d = number of digits of the larger input number.
- Time: O(d)
- Space: O(1)
