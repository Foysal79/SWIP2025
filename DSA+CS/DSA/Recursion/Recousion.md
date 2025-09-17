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

### Complexity

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

### Memoization Table After Execution

```
n	  0	  1	2	3	 4	   5
dp	-1	1	2	6	 24	  120
```

### Complexity:

- **Time:** O(n)
- **Space:** O(n) (recursion stack + dp array)

# Fibonacci

## Fibonacci Example (n = 5)

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

### complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(n) (dp array + stack)

# 3️⃣ Iterative DP (Bottom-up)

# Fibonacci

```cpp
class Solution {
public:
    int fib(int n) {
        int currentF = n, previousone = 1, previoustow = 0;
        for(int i = 2; i <= n; i++)
        {
            currentF = previousone + previoustow;
            previoustow = previousone;
            previousone = currentF;
        }
        return currentF;
    }
};
```

## How to Work

```
i=2: F(0)+F(1) = 0+1 → F(2)=1
      previoustow <- previousone = 1
      previousone <- currentF = 1

i=3: F(1)+F(2) = 1+1 → F(3)=2
      previoustow <- previousone = 1
      previousone <- currentF = 2

i=4: F(2)+F(3) = 1+2 → F(4)=3
      previoustow <- previousone = 2
      previousone <- currentF = 3

i=5: F(3)+F(4) = 2+3 → F(5)=5
      previoustow <- previousone = 3
      previousone <- currentF = 5
```

### Complexity

- **Optimization** (Space O(1))
- **Total complexity:** O(n)

# iterative factorial (bottom-up)

```cpp
int factorial(int n) {
    int result = 1;
    for(int i = 2; i <= n; i++) {
        result = result * i;
    }
    return result;
}

```

### Flow Diagram (Arrow Style):

### Initial: result = 1

```
i=2: result = result * i = 1 * 2 = 2
i=3: result = result * i = 2 * 3 = 6
i=4: result = result * i = 6 * 4 = 24
i=5: result = result * i = 24 * 5 = 120
```

### Complexity

- **Time Complexity:** O(n)

- **Space Complexity:** O(1)
