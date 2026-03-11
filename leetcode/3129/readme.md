# LeetCode 3129 - Find All Possible Stable Binary Arrays I

## Problem
Count the number of binary arrays with exactly `zero` 0s and `one` 1s such that no subarray of length greater than `limit` is all the same digit.

## Solution
Use 3D DP where `ways[i][j][k]` represents the number of stable arrays using `i` zeros and `j` ones with the last element being `k` (0 or 1). Extend the array by appending the same or different digit, then subtract the arrangements that violate the consecutive-run constraint.

## Complexity
Let z = numZeros, o = numOnes.
- Time: O(z × o)
- Space: O(z × o)
