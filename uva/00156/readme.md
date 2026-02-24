# UVa 00156 - Ananagrams

## Problem
Given a dictionary, find all words whose sorted lowercase form is unique (i.e., no other word is an anagram of it), and output them in lexicographic order.

## Solution
Normalize each word by lowercasing and sorting its characters, then group words by this canonical form using a hash map. Words whose group has exactly one member are ananagrams.

## Complexity
Let n = number of words, L = maximum word length.
- Time: O(n · L log L + n log n)
- Space: O(n · L)
