# UVa 10101 - Bangla Numbers

## Problem
Convert a number (up to 999999999999999) into Bangla text using units kuti, lakh, hajar, and shata.

## Solution
Recursively decompose the number by greedily dividing from the largest Bangla unit (kuti = 10^7) down to shata (10^2), concatenating `toBangla(quotient) + unit + toBangla(remainder)` at each level, with the base case returning the number directly when it is below 100.

## Complexity
Let d = number of digits in the input number.
- Time: O(d)
- Space: O(d) — recursion stack depth
