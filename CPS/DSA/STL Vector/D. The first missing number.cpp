#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, m;
    cin >> n >> m;
    vector<bool> present(2*m, false);

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        present[x+m] = true;
    }
    for(int i = -m; i <= m; i++)
    {
        if(!present[i+m])
        {
            cout << i << endl;
            return 0;
        }
    }
    

    return 0;
}