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

---
