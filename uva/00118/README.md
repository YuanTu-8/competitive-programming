# UVa 00118 - Mutant Flatworld Explorers

## Problem
Simulate robots moving on a grid; robots that fall off are "lost" but leave a scent preventing future robots from falling at that spot.

## Solution
Direct simulation with a 2D boolean array tracking scent positions. Each robot processes commands sequentially: 'L'/'R' rotate the direction index (mod 4), 'F' moves forward. Before moving, check if the destination is out of bounds—if so and no scent exists at current position, mark scent and set robot as lost; if scent exists, ignore the command. The key insight is that scent is tied to the departure cell, not the destination.

## Complexity
Let r = number of robots, c = average command length, X × Y = grid dimensions (max 51 × 51).
- Time: O(r × c)
- Space: O(X × Y) for scent grid