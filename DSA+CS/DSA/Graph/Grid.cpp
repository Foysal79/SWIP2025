#include <bits/stdc++.h>
using namespace std;
char adjMat[1000][1000];
int main()
{
    int r; // কতগুলো node আছে (vertices)
    int c; // কতগুলো edge আছে
    cin >> r >> c;

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cin >> adjMat[i][j];
        }
    }
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cout << adjMat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}