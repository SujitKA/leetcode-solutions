## Problem: Two Sum (Easy)
**Link:** https://leetcode.com/problems/two-sum/

### Approach
Used a brute-force nested loop — for each element, check every other element after it to see if the two add up to the target. Simple and works within constraints for this problem size.

### Complexity
- Time: O(n²)
- Space: O(1)

### Notes
A hashmap-based approach could bring this down to O(n) time, but C has no built-in hashmap, so that'd need a manual array-based lookup. Worth trying as a follow-up.