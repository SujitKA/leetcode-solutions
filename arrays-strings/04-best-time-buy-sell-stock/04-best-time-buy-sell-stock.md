## Problem: Best Time to Buy and Sell Stock (Easy-Medium)
**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach
Single pass through the prices array, tracking the lowest price seen so far and the best profit seen so far. At each day, check the profit if selling today after buying at the running minimum, and update the best profit if it's higher.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
My first attempt found the global minimum price first, then searched for the max only after that point — this misses cases where the best dip-then-rise happens before the eventual lowest point in the array (e.g. [3,2,6,5,0,3]). The single-pass approach avoids this.