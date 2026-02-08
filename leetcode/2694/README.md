# LeetCode 2694 - Event Emitter

## Problem
Design an EventEmitter class that supports subscribing to named events with callbacks and emitting events to invoke all registered callbacks in subscription order.

## Solution
Used a `Map<string, Set<Callback>>` to store listeners per event. Each `subscribe` returns a closure that captures the callback reference for removal.

## Complexity
Let n = number of subscribers for the emitted event.
- Time: O(n) per emit, O(1) per subscribe/unsubscribe
- Space: O(n) total stored callbacks