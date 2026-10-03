## Problem: Reverse a String (Easy)
**Link:** https://leetcode.com/problems/reverse-string/

### Approach
Swapped characters from both ends of the string moving toward the middle, using a temp variable to hold one character during the swap. Had to compute the actual string length with `strlen()` after reading input, rather than relying on the buffer size, since `fgets` doesn't guarantee the string fills the whole buffer.

### Complexity
- Time: O(n)
- Space: O(1) (excluding the input string itself)

### Notes
Ran into a segmentation fault initially from declaring `char str[n]` before `n` was actually read via `scanf` — the array was sized on garbage memory. Also had to manually strip the trailing `\n` left by `fgets` before reversing.