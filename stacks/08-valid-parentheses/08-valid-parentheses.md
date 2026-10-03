## Problem: Valid Parentheses (Easy-Medium)
**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach
Used a char array as a manual stack. Pushed opening brackets onto the stack. On a closing bracket, popped the top of the stack and checked it matched the corresponding opening type — if the stack was empty or the types didn't match, the string is invalid immediately. At the end, the stack must be empty for the string to be valid (no unclosed brackets left over).

### Complexity
- Time: O(n)
- Space: O(n) (worst case, all characters are opening brackets)

### Notes
Tested with "([)]" specifically — this case has the *right* brackets but in the *wrong order*, which is why a stack (not just a bracket-type counter)