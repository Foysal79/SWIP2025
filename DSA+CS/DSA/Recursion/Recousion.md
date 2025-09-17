# 1️⃣ Basic Recursion

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

## Complexity

- **Time:** O(n)
- **Space:** O(n) (recursion stack)

---

# 2️⃣ Recursion + DP (Top-down / Memoization)

# Factorial

```cpp
int factorial(int n, vector<int> &dp) {
    if(n <= 1) return 1;
    if(dp[n] != -1) return dp[n];
    int res = n * factorial(n-1, dp);
    dp[n] = res;
    return dp[n];
}
int fact(n , vector<int> dp)
{
  int res = factorial(n, dp)
  return res;
}
```

```
fact(5)
 └── fact(4)
      └── fact(3)
           └── fact(2)
                └── fact(1) = 1   [dp[1]=1]
           ⇒ dp[2] = 2
      ⇒ dp[3] = 6
 ⇒ dp[4] = 24
⇒ dp[5] = 120
```

# Memoization Table After Execution

```
n	  0	  1	2	3	 4	   5
dp	-1	1	2	6	 24	  120
```

# Complexity:

- **Time:** O(n)
- **Space:** O(n) (recursion stack + dp array)

### Fibonacci

# Fibonacci Example (n = 5)

```cpp
#include <bits/stdc++.h>
using namespace std;

long long factMemo(int n, vector<long long>& dp) {
    // Base Case
    if (n == 0 || n == 1) return 1;

    // If already computed, return from dp
    if (dp[n] != -1) return dp[n];

    // Compute and store in dp
    dp[n] = n * factMemo(n - 1, dp);
    return dp[n];
}

int main() {
    int n = 5;
    vector<long long> dp(n + 1, -1);

    int res =- factMemo(n, dp);
    return res;
}

```

```
fib(5) ?
 ├── fib(4) ?
 │    ├── fib(3) ?
 │    │    ├── fib(2) ?
 │    │    │    ├── fib(1) = 1   <-- base
 │    │    │    └── fib(0) = 0   <-- base
 │    │    │ => dp[2] = 1
 │    │    └── fib(1) = 1
 │    │ => dp[3] = 2
 │    └── fib(2) => from dp[2] = 1   <-- MEMOIZED ✅
 │    => dp[4] = 3
 └── fib(3) => from dp[3] = 2       <-- MEMOIZED ✅
 => dp[5] = 5
```

```
fact(5) ?
└── 5 * fact(4) ?
      └── 4 * fact(3) ?
            └── 3 * fact(2) ?
                  └── 2 * fact(1) ?
                        └── 1 * fact(0) = 1  <-- base
                  => dp[1] = 1
            => dp[2] = 2
      => dp[3] = 6
=> dp[4] = 24
=> dp[5] = 120
```

# complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(n) (dp array + stack)

# 3️⃣ Iterative DP (Bottom-up)
