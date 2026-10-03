## Problem: Valid Anagram (Easy)
**Link:** https://leetcode.com/problems/valid-anagram/

### Approach
Used a frequency-count array of size 26 (one slot per lowercase letter). Incremented counts for each letter in `s`, decremented for each letter in `t`. If every slot lands back on 0 and the lengths matched, the strings are anagrams.

### Complexity
- Time: O(n)
- Space: O(1) (fixed-size 26-length array regardless of input size)

### Notes
My first attempt used a nested loop comparing every character of `s` against every character of `t`, but this overcounted matches when letters repeated (e.g. "aab" vs "aba"), and would have been O(n²) — too slow for the given constraint of up to 5×10⁴ characters.