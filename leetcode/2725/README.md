# LeetCode 2725 - Interval Cancellation

## Problem
Return a cancel function that stops the repeated execution of `fn` which is called immediately and then every `t` milliseconds.

## Solution
Use `setInterval` to schedule repeated calls and return a closure that captures the timer ID to call `clearInterval`.

## Complexity
- Time: O(1) for setup and cancellation
- Space: O(1)