# LeetCode 3637 - Trionic Array I

## Problem
Determine if an array can be divided into three segments: strictly increasing, strictly decreasing, then strictly increasing again.

## Solution
Scan through the array in three phases using a helper function: find the peak of the first increasing segment, then the valley after the decreasing segment, and verify the final segment is increasing until the end.

## Complexity
Let n = length of the input array.
- Time: O(n)
- Space: O(1)