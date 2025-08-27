#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    while(q--)
    {
        string s;
        cin >> s;
        if(s == "sort")
        {
            int x, y;
            cin >> x >> y;
            sort(v.begin()+(x-1), v.begin()+y);
        }
        if(s == "pop_back")
        {
            v.pop_back();
        }
        if(s == "back")
        {
            cout << v.back() << endl;
        }
        if(s == "reverse")
        {
            int x, y;
            cin >> x >> y;
            reverse(v.begin()+(x-1), v.begin()+y);
        }
        if(s == "front")
        {
            cout << v.front() << endl;
        }
        if(s == "push_back")
        {
            int x ;
            cin >> x;

            v.push_back(x);
        }
        if(s == "print")
        {
            int x;
            cin >> x;
            cout << v[x-1] << endl;
        }
    }

    return 0;
}