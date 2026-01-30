# UVa 00272 - TEX Quotes

## Problem
Convert standard ASCII double quotes (`"`) to TeX-style quotes (``` `` ``` for opening, `''` for closing).

## Solution
Use a boolean flag to track whether the next quote should be an opening or closing quote. Read the input character by character; when encountering `"`, output the appropriate TeX quote based on the current state and toggle the flag. All other characters are printed as-is.

## Complexity
Let n = length of input text.
- Time: O(n)
- Space: O(1)