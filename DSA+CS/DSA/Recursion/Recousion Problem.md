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
│  │   │  ├─ "((((" ❌
│  │   │  └─ "((()"
│  │   │      ├─ "((()(" ❌
│  │   │      └─ "((())"
│  │   │          ├─ "((())(" ❌
│  │   │          └─ "((()))" ✅
│  │   └─ "(()"
│  │      ├─ "(()("
│  │      │   ├─ "(()((" ❌
│  │      │   └─ "(()()"
│  │      │        ├─ "(()()(" ❌
│  │      │        └─ "(()())" ✅
│  │      └─ "(())"
│  │           ├─ "(())(" ❌
│  │           └─ "(())()" ✅
│  └─ "()"
│      ├─ "()("
│      │   ├─ "()((" 
│      │   │    ├─ "()(()" 
│      │   │    └─ "()(())" ✅
│      │   └─ "()()"
│      │        ├─ "()()(" ❌
│      │        └─ "()()()" ✅
│      └─ "())" ❌
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

---
