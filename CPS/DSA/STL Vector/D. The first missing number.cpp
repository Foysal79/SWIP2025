#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    vector<int> v1;
    for(auto &x : v)
    {
        cin >> x;
    }
    sort(v.begin(), v.end());

    int star = -(n-1);
    for(int i = star; i < n; i++)
    {
        if(i == 0) continue;
        else v1.push_back(i);
    }
    return 0;
}