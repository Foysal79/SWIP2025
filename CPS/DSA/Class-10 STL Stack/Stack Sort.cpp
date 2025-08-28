#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    stack<int> in;
    stack<int> out;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        in.push(x);
    }

    while(!in.empty())
    {
        int top = in.top();
        in.pop();
        
        while(!out.empty() && out.top() < top)
        {
            in.push(out.top());
            out.pop();
        }
        out.push(top);
    }

    while(!out.empty())
    {
        cout << out.top() << " ";
        out.pop();
    }


    return 0;
}