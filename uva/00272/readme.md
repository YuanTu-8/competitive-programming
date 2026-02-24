# UVa 00272 - TeX Quotes

## Problem
Replace every double quote (`"`) with TeX-style opening (```` `` ````) or closing (`''`) quotes, alternating starting with opening.

## Solution
Scan through input character by character, track a boolean flag to alternate between opening and closing quotes.

## Complexity
Let n = number of characters in input.
- Time: O(n)
- Space: O(1)
