## Problem: Longest Common Prefix (Easy-Medium)
**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
Started by assuming the first string is the full candidate prefix. Compared it character-by-character against every other string in the array, shrinking the prefix length as soon as a mismatch was found. Built and returned a newly allocated string of the final prefix length.

### Complexity
- Time: O(S), where S is the total number of characters across all strings
- Space: O(1) extra (excluding the returned output string, which is heap-allocated)

### Notes
The result string is allocated with `malloc`, so it must be freed by the caller after use — different from earlier problems that only used stack-allocated arrays.