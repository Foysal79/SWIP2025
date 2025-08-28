#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;
    stack<char> st;
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else
        {
            if(st.empty())
            {
                return false;
            }
            else if (c == ')' && st.top() == '(')
            {
                st.pop();
            }
            else if (c == '}' && st.top() == '{')
            {
                st.pop();
            }
            else if (c == ']' && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
    }

    if (st.empty())
    {
        cout << "valid" << endl;
    }
    else
    {
        cout << "no valid" << endl;
    }

    return 0;
}