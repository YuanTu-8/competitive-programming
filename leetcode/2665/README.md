# LeetCode 2665 - Counter II

## Problem
Create a counter factory function that returns an object with `increment`, `decrement`, and `reset` methods.

## Solution
Use closure to encapsulate counter state; the returned object's methods share access to the mutable `current` variable while `init` remains constant for reset.

## Complexity
- Time: O(1) for all operations
- Space: O(1)