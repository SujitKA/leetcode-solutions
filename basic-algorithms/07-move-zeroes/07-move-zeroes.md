## Problem: Move Zeroes (Easy-Medium)
**Link:** https://leetcode.com/problems/move-zeroes/

### Approach
Used a "write pointer" that tracks where the next non-zero element should go. Walked through the array once, and whenever a non-zero element was found, placed it at the write pointer's position and advanced the pointer. After the pass, filled the remaining positions with zeroes.

### Complexity
- Time: O(n)
- Space: O(1) (in-place)

### Notes
Preserves the relative order of the non-zero elements, which the problem requires — a naive swap-based approach can accidentally reorder them if not implemented carefully.