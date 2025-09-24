#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100];
int main()
{
  
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        int u, v ; 
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i = 1; i <= n; i++)
    {
        cout << i << " : ";
        for(auto u : adj[i])
        {
            cout << u << " ";
        }
        cout << endl;
    }


    return 0;
}