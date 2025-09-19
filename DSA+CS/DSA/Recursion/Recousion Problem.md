# Easy Problem

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



#  [LeetCode Problem solution : 46. Permutations Problem](https://leetcode.com/problems/permutations/description/)

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
#### Time Complexity : O(n×n!)
here are ```n!``` permutations and building each permutation takes ```O(n)```
#### Auxiliary Space= ```O(n)(excluding output)```

#### Total Space (including ans)= ```O(n⋅n!)```