# UVa 10041 - Vito's Family

## Problem
Find a street number that minimizes the total distance to all relatives' streets.

## Solution
Use `std::nth_element` to find the median, then sum absolute differences from it.

## Complexity
Let n = number of relatives.
- Time: O(n)
- Space: O(n)
