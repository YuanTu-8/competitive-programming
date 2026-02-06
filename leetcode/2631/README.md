# LeetCode 2631 - Group By

## Problem
Implement a `groupBy` method on `Array.prototype` that groups array elements by the string key returned from a callback function.

## Solution
Iterate through the array, use the callback to compute each element's group key, and accumulate elements into the corresponding arrays in a result object.

## Complexity
Let n = length of the array.
- Time: O(n)
- Space: O(n)