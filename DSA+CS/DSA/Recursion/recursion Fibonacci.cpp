// LeetCode Solution-1: Bottom Up
class Solution
{
public:
    int fib(int n)
    {
        if (n <= 1)
            return n; // base case :
        int f[n + 1];
        f[0] = 0;
        f[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            f[i] = f[i - 1] + f[i - 2];
        }

        return f[n];
    }
};

// LeetCode Solution-2: Iterative Dynamic Programming Bottom up with Memory Optimization
// Optimization (Space O(1))
// Total complexity: O(n)
class Solution
{
public:
    int fib(int n)
    {
        if (n <= 1)
            return n;
        int curentF = n, perviousOne = 1, perviousTow = 0;
        for (int i = 2; i <= n; i++)
        {
            curentF = perviousOne + perviousTow;
            perviousTow = perviousOne;
            perviousOne = curentF;
        }
        return curentF;
    }
};

// LeetCode Solution-3: Recursion with Top Down
// time Complexity T(n)=T(n−1)+T(n−2)+O(1) : O(2^n)
// Space Complexity : O(n)
class Solution
{
public:
    int calcFib(int n)
    {
        if (n <= 1)
            return n;
        int res = calcFib(n - 1) + calcFib(n - 2);
        return res;
    }
    int fib(int n)
    {
        int res = calcFib(n);
        return res;
    }
};

// Solution-4: Dynamic Programming, Top-down Approach
// calcFib(5)
//  ├─ calcFib(4)
//  │   ├─ calcFib(3)
//  │   │   ├─ calcFib(2)
//  │   │   │   ├─ calcFib(1) = 1
//  │   │   │   └─ calcFib(0) = 0
//  │   │   └─ calcFib(1) = 1
//  │   └─ calcFib(2) = 1 (memoized)
//  └─ calcFib(3) = 2 (memoized)

// Complexity
// Time: O(n) → each Fibonacci number computed once.
// Space: O(n) → recursion stack + dp array.

class Solution
{
public:
    int calcFib(int n, vector<int> &dp) // dp refereeing 
    {
        if (n <= 1)
            return n;
        if (dp[n] != -1)
            return dp[n];

        dp[n] = calcFib(n - 1, dp) + calcFib(n - 2, dp);
        return dp[n];
    }
    int fib(int n)
    {
        vector<int> dp(n + 1, -1); // dp = [-1, -1, -1, -1, -1, -1]
        int res = calcFib(n, dp);
        return res;
    }
};