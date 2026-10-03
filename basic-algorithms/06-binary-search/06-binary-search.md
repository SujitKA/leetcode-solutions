## Problem: Binary Search (Easy-Medium)
**Link:** https://leetcode.com/problems/binary-search/

### Approach
Standard binary search on a sorted array — maintain `low` and `high` pointers, check the middle element, and narrow the search range by half each time depending on whether the target is smaller or larger than the middle value.

### Complexity
- Time: O(log n)
- Space: O(1)

### Notes
Careful with the mid-point calculation (`low + (high - low) / 2` instead of `(low + high) / 2`) to avoid integer overflow on very large arrays, even though it wasn't strictly needed for this problem's constraints.