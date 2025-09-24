#include<bits/stdc++.h>
using namespace std;
int main()
{

   int n, m;
   cin >> n >> m;
   vector<pair<int, int>> edges;
   
   for(int i = 0; i < m; i++)
   {
    int u, v; cin >> u >> v;
    edges.push_back({u, v});
    edges.push_back({v, u});
   }


    return 0;
}