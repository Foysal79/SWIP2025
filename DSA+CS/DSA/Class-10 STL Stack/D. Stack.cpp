#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    stack<int> st;
    while(t--)
    {
        string s;
        cin >> s;
        if(s == "push")
        {
            int x;
            cin >> x;
            st.push(x);
        }
        else if(s == "top")
        {
            cout << st.top() << endl;
        }
        else if(s == "pop")
        {
            st.pop();
        }


    }


    return 0;
}