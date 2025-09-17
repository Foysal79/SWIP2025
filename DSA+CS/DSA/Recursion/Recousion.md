#  1️⃣ Basic Recursion
```cpp
int factorial(int n) {
    if(n <= 1) return 1; // base case
    return n * factorial(n-1); // recursive call
}
```
## Input/Output Example
**Input:** 5  
**Output:** 120  
### Step-by-step
```
factorial(5) = 5 * factorial(4)
factorial(4) = 4 * factorial(3)
factorial(3) = 3 * factorial(2)
factorial(2) = 2 * factorial(1)
factorial(1) = 1
```
**Result:** 5*4*3*2*1 = 120  
---
## Complexity
- **Time:** O(n)  
- **Space:** O(n) (recursion stack)  
---

# 2️⃣ Recursion + DP (Top-down / Memoization)

```cpp
int factorial(int n, vector<int> &dp) {
    if(n <= 1) return 1;
    if(dp[n] != -1) return dp[n];
    dp[n] = n * factorial(n-1, dp);
    return dp[n];
}
int fact(n , vector<int> dp)
{
  int res = factorial(n, dp)
  return res;
}
```


