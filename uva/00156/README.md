# UVa 00156 - Ananagrams

## Problem
Find all words that have no anagrams among the other input words.

## Solution
I normalize each word by converting it to lowercase and sorting its characters, using this as a key to group anagrams together. Words that are alone in their group (group size = 1) have no anagrams and are collected as answers. Finally, I output these "ananagrams" in alphabetical order.

## Complexity
Let n = number of words, k = maximum word length.
- Time: O(n × k log k) for normalizing all words, plus O(n log n) for final sorting
- Space: O(n × k) for storing all words and their normalized forms