# LeetCode 1582 - Special Positions in a Binary Matrix

## Problem
Count positions where the value is 1 and it is the only 1 in its row and column.

## Solution
Precompute row sums and column sums. A cell is special if its value is 1 and both its row sum and column sum equal 1.

## Complexity
Let m = number of rows, n = number of columns.
- Time: O(m × n)
- Space: O(m + n)
