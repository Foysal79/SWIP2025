# Easy Problem

# [Print 1 to n using Recursion]()

```cpp
    void printNos(unsigned int n)
    {
        // base condition
        if (n == 0)  {
         return;
        }
            printNos(n - 1);
            cout << n <<" ";
    }
int main()
{
    int n=3;
    printNos(n);
    return 0;
}
```

```
printNos(3)
 └─ printNos(2)
      └─ printNos(1)
           └─ printNos(0) → return
           cout << 1
      cout << 2
 cout << 3
```

---

# [Print n to 1 without loop]()

```cpp
 void printNos(unsigned int n)
    {
        if (n > 0) {
            cout << n << " ";
            printNos(n - 1);
        }
        return;
    }
```

### if n = `3`

```
printNos(3)
   cout << 3
   printNos(2)
       cout << 2
       printNos(1)
           cout << 1
           printNos(0) → return
```

---

# [Sum of first n natural numbers using recursion]()

```cpp
int Recursion_sum(int n)
{
   if(n == 0) return n; // base case

   // Recursive call
   return n + Recursion_sum(n-1);

}
int main()
{
    int n; cin >> n;
    cout << Recursion_sum(n) ;
    return 0;
}

```

```
Input : 3
Output : 6
Explanation : 1 + 2 + 3= 6

Input : 5
Output : 15
Explanation : 1 + 2 + 3 + 4 + 5 = 15
```

## How to Work

### N = 3

```
Top-Down ↓                             Bottom-Up ↑

Recursion_sum(3)                       = 6
= 3 + Recursion_sum(2)                 ← (3 + 3)
         Recursion_sum(2)              = 3
         = 2 + Recursion_sum(1)        ← (2 + 1)
                  Recursion_sum(1)     = 1
                  = 1 + Recursion_sum(0) ← (1 + 0)
                           Recursion_sum(0) = 0
```

### N = 5

```
Recursion_sum(5)
= 5 + Recursion_sum(4)
= 5 + (4 + Recursion_sum(3))
= 5 + (4 + (3 + Recursion_sum(2)))
= 5 + (4 + (3 + (2 + Recursion_sum(1))))
= 5 + (4 + (3 + (2 + (1 + Recursion_sum(0)))))
= 5 + (4 + (3 + (2 + (1 + 0))))
= 15
```

### Time complexity : `O(n)`

### Auxiliary space : `O(n)`

---

# [Decimal to binary number using recursion]()

```
To convert 10 to binary

10 % 2 = 0, continue with 10 / 2 = 5
5 % 2 = 1, continue with 5 / 2 = 2
2 % 2 = 0, continue with 2 / 2 = 1
1 % 2 = 1, stop as 1 / 2 = 0
Reading remainders gives 1010 (binary).
```

## simplest form use `Integer`

```cpp
#include <bits/stdc++.h>
using namespace std;
int decToBinary(int n)
{
    if(n == 0)  // base case
    {
        return 0;
    }
    return (n%2)+10*decToBinary(n/2);
}
int main()
{
int x;
cin >> x;
cout << decToBinary(x) << endl;
    return 0;
}
```

## Step By step

### n = `5`

```
decToBinary(5)
= (5 % 2) + 10 * decToBinary(2)
= 1 + 10 * decToBinary(2)
                     |
                     └── decToBinary(2)
                         = (2 % 2) + 10 * decToBinary(1)
                         = 0 + 10 * decToBinary(1)
                                          |
                                          └── decToBinary(1)
                                              = (1 % 2) + 10 * decToBinary(0)
                                              = 1 + 10 * decToBinary(0)
                                                               |
                                                               └── decToBinary(0)
                                                                   = 0  (base case)
```

## Largest Form use `string`

```cpp

 int decToBinary(int d, string &result)
{
    if(d > 1)
    {
        decToBinary((d/2), result);
    }
    result.push_back((d%2) + '0');
}
int main()
{
    int d;
    cin >> d;
    string result = "";
    decToBinary(d, result);
    cout << result << endl;
    return 0;
}
```

## Step By step Code

### n = `5`

```
decToBinRec(5)                decToBinRec(5) → append '1'   → res = "101"
   |
   └── decToBinRec(2)         decToBinRec(2) → append '0'   → res = "10"
           |
           └── decToBinRec(1) decToBinRec(1) → append '1'   → res = "1"
```

---

# [Sum of array]()

```cpp
class Solution {
  public:
  int Array_Sum(vector<int> &arr, int n)
  {
     if(n == 0) return 0;
     return Array_Sum(arr, n-1) + arr[n-1];
  }
    int arraySum(vector<int>& arr) {
        int result = Array_Sum(arr, arr.size());
        return result;
    }
};
```

### Input: arr[] = `[1, 2, 3, 4]`

### Output: `10`

### Explanation: `1 + 2 + 3 + 4 = 10.`

```
Array_Sum(arr,4)
 └── Array_Sum(arr,3)
      └── Array_Sum(arr,2)
           └── Array_Sum(arr,1)
                └── Array_Sum(arr,0) = 0
                <- return 0 + arr[0] = 1
           <- return 1 + arr[1] = 3
      <- return 3 + arr[2] = 6
 <- return 6 + arr[3] = 10
```

---

# [Reverse of a string]()

---

# [Length of a string]()

---

# [Sum of digit]()

---

---

# Medium Problem

---

# Hard Problem

---

# LeetCode Problem

# [LeetCode Problem solution : Generate Parentheses Problem](https://leetcode.com/problems/generate-parentheses/)

```cpp

class Solution {
public:
   // check parentheses
   bool isValid(string s){
    stack<char> st;
   for(auto c : s)
   {
    if(c == '(')
    {
        st.push(c);
    }
    else {
        if(st.empty())
        {
            return false;
        }
        else{
            st.pop();
        }
    }

   }
return st.empty();
   }

// Recursion Call
   void solve(int n, string cur, vector<string> &ans){
        if(cur.size() == (2 * n)) {  // base case
            if(isValid(cur)) ans.push_back(cur);
            return;
        }
        solve(n, cur + "(", ans);
        solve(n, cur + ")", ans);
   }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string cur;
        solve(n, cur, ans);
        return ans;
    }
};
```

### recursion tree n = 3 step-by-step

```
Root: ""
├─ "("
│  ├─ "(("
│  │   ├─ "((("
│  │   │  ├─ "(((("
│  │   │  └─ "((()"
│  │   │      ├─ "((()("
│  │   │      └─ "((())"
│  │   │          ├─ "((())("
│  │   │          └─ "((()))" ✅
│  │   └─ "(()"
│  │      ├─ "(()("
│  │      │   ├─ "(()(("
│  │      │   └─ "(()()"
│  │      │        ├─ "(()()("
│  │      │        └─ "(()())" ✅
│  │      └─ "(())"
│  │           ├─ "(())("
│  │           └─ "(())()" ✅
│  └─ "()"
│      ├─ "()("
│      │   ├─ "()(("
│      │   │    ├─ "()(()"
│      │   │    └─ "()(())" ✅
│      │   └─ "()()"
│      │        ├─ "()()("
│      │        └─ "()()()" ✅
│      └─ "())"
└─ ")" ❌
```

### ✅ Valid leaves / final answers:

```
((()))

(()())

(())()

()(())

()()()
```

### ❌ Invalid / pruned nodes:

```
")" (first char closing)

()❌

(((("

((()("

((())("

(()(("

(()()("

(())(

()(("

()()(

())
```

## Optimized solutions

```cpp
class Solution {
public:
    void solve(int n, string &cur, int opeming, int closing, vector<string> &ans)
    {
      if(cur.size() == 2 * n)
      {
        ans.push_back(cur);
        return;
      }
      if(opeming < n)
      {
        cur.push_back('(');
        solve(n, cur, opeming+1, closing, ans);
        cur.pop_back();
      }
      if(closing < opeming)
      {
        cur.push_back(')');
        solve(n, cur, opeming, closing+1, ans);
        cur.pop_back();
      }
    }
    vector<string> generateParenthesis(int n) {
        string cur;
        vector<string> ans;
        int opening = 0;
        int closing = 0;
        solve(n, cur, opening, closing, ans);
        return ans;
    }
};
```

### 📌 Recursion Tree for n = 2 with (o, c)

```
Start: "" (o=0,c=0)
        |
        "(" (o=1,c=0)
       /        \
 "((" (o=2,c=0)  "()" (o=1,c=1)
     |               \
 "(()" (o=2,c=1)      "()(" (o=2,c=1)
     |                   |
 "(())" (o=2,c=2)      "()()" (o=2,c=2)
```

#### Leaf nodes (final answers):

```
(())

()()
```

### 📌 Recursion Tree for n = 3 with (o, c)

```
Start: "" (o=0,c=0)
        |
        "(" (o=1,c=0)
       /        \
  "((" (o=2,c=0)  "()" (o=1,c=1)
   /       \           \
"((("     "(()"         "()("
(o=3,c=0) (o=2,c=1)    (o=2,c=1)
   |     /      \      /     \
"((()" "(()(" "(()))" "()((" "()()"
(3,1)  (3,1)  (2,2)   (3,1)  (2,2)
   |      |      |       |      |
"((())" "(()()" "(()())" "()(()" "()()("
(3,2)   (3,2)   (2,3)   (3,2)   (3,2)
   |       |       |       |       |
"((()))" "(()())" "(())()" "()(())" "()()()"
(3,3)   (3,3)   (3,3)   (3,3)   (3,3)
```

#### ✅ Leaf nodes (final answers):

```
((()))

(()())

(())()

()(())

()()()
```

#### Complexity Analysis

## ⏱️ Time Complexity

1. We place `n` opening and `n` closing brackets → total string length = `2n`.
2. In the recursion tree, each position can branch into at most 2 choices (`'('` or `')'`). Worst case tree size = `O(2^(2n))`.
3. But invalid paths are pruned (`closing < opening` condition). The actual number of valid strings is the **Catalan number**:

   $$
   C_n = \frac{1}{n+1}\binom{2n}{n}
   $$

   Asymptotically:

   $$
   C_n \sim \frac{4^n}{n^{3/2}\sqrt{\pi}}
   $$

4. Each valid string construction costs `O(n)`.
   ➡️ **Final Time Complexity:**
   $$
   O(n \cdot C_n) \approx O\!\left(\frac{4^n}{\sqrt{n}}\right)
   $$

## 💾 Space Complexity

Two parts:

1. **Recursion stack depth** → at most `2n`, so `O(n)`.
2. **Result storage** → we must store `C_n` strings of length `2n`.
   $$
   O(n \cdot C_n)
   $$
   **Final Space Complexity:**
   $$
   O(n \cdot C_n) + O(n)
   $$

- **Time Complexity:** `O(n * Cn)` ≈ `O(4^n / √n)`
- **Space Complexity:** `O(n * Cn)` (results) + `O(n)` (recursion stack)

---

# [LeetCode Problem solution : 46. Permutations Problem](https://leetcode.com/problems/permutations/description/)

```cpp
class Solution {
public:
   void solve(vector<int> &nums, vector<int> &cur, vector<bool> &mask, vector<vector<int>> &ans)
   {
    if(nums.size() == cur.size())
    {
        ans.push_back(cur);
        return;
    }

    for(int i = 0; i < nums.size(); i++)
    {
        if(mask[i] == 0)
        {
             cur.push_back(nums[i]);
             mask[i] = 1;
            solve(nums, cur, mask, ans);

            cur.pop_back();
            mask[i] = 0;
        }
    }


   }
    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> cur;
        vector<bool> mask(nums.size(), 0);

        solve(nums, cur, mask, ans);

        return ans;
    }
};
```

## Input: nums = `[1,2,3]`

## Output: `[[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]`

## Step by step Solve

### Root (Level 0)

```
Copy code
[] (mask=[F,F,F])
L0 loop i=0 → start
```

## Level 1: pick first element

```i=0 🔵 pick 1 → [1] (mask=[T,F,F])
    L1 loop i=0 → start
    i=0 skip
    i=1 🔵 pick 2 → [1,2] (mask=[T,T,F])
        L2 loop i=0 → start
        i=0 skip
        i=1 skip
        i=2 🔵 pick 3 → [1,2,3] (mask=[T,T,T]) ✅
        🔴 pop 3 → [1,2] (mask=[T,T,F])
        L2 loop i=2 → end
    i=2 🔵 pick 3 → [1,3] (mask=[T,F,T])
        L2 loop i=0 → start
        i=0 skip
        i=1 🔵 pick 2 → [1,3,2] (mask=[T,T,T]) ✅
        🔴 pop 2 → [1,3] (mask=[T,F,T])
        L2 loop i=2 → end
    🔴 pop 1 → [] (mask=[F,F,F])
```

## Level 2: pick second element

```
i=1 🔵 pick 2 → [2] (mask=[F,T,F])
    L1 loop i=0 → start
    i=0 🔵 pick 1 → [2,1] (mask=[T,T,F])
        L2 loop i=0 → start
        i=0 skip
        i=1 skip
        i=2 🔵 pick 3 → [2,1,3] (mask=[T,T,T]) ✅
        🔴 pop 3 → [2,1] (mask=[T,T,F])
        L2 loop i=2 → end
    i=2 🔵 pick 3 → [2,3] (mask=[F,T,T])
        L2 loop i=0 → start
        i=0 🔵 pick 1 → [2,3,1] (mask=[T,T,T]) ✅
        🔴 pop 1 → [2,3] (mask=[F,T,T])
        L2 loop i=2 → end
    🔴 pop 2 → [] (mask=[F,F,F])
```

## Level 3: pick Third element

```
i=2 🔵 pick 3 → [3] (mask=[F,F,T])
    L1 loop i=0 → start
    i=0 🔵 pick 1 → [3,1] (mask=[T,F,T])
        L2 loop i=0 → start
        i=0 skip
        i=1 🔵 pick 2 → [3,1,2] (mask=[T,T,T]) ✅
        🔴 pop 2 → [3,1] (mask=[T,F,T])
        L2 loop i=2 → end
    i=1 🔵 pick 2 → [3,2] (mask=[F,T,T])
        L2 loop i=0 → start
        i=0 🔵 pick 1 → [3,2,1] (mask=[T,T,T]) ✅
        🔴 pop 1 → [3,2] (mask=[F,T,T])
        L2 loop i=2 → end
    🔴 pop 3 → [] (mask=[F,F,F])
```

## Leaf Nodes (Base Cases)

`[1,2,3], [1,3,2], [2,1,3], [2,3,1], [3,1,2], [3,2,1]`

#### Time Complexity : O(n×n!)

here are `n!` permutations and building each permutation takes `O(n)`

#### Auxiliary Space= `O(n)(excluding output)`

#### Total Space (including ans)= `O(n⋅n!)`
