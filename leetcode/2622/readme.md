# LeetCode 2622 - Cache with Time Limit

## Problem
Implement a key-value cache where each entry expires after a specified duration.

## Solution
Use a Map to store entries with their values and associated timers. On `set`, clear any existing timer before creating a new one that auto-deletes the entry after the duration.

## Complexity
Let n = number of keys in the cache.
- Time: O(1) for all operations (set, get, count)
- Space: O(n) for storing entries and their timers