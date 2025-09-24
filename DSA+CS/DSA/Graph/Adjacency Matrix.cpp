#include <bits/stdc++.h>
using namespace std;
int adjMat[1000][1000];
int main()
{
    int n; // কতগুলো node আছে (vertices)
    int m; // কতগুলো edge আছে
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adjMat[u][v] = 1;
        adjMat[v][u] = 1; // if UnDirect Graph
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << adjMat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    while (true)
    {
        int u, v;
        cin >> u >> v;
        if (adjMat[u][v] == 1)
        {
            cout << "Edge Exists" << endl;
        }
        else
        {
            cout << "No this edge Exists" << endl;
        }
    }
    return 0;
}