#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, q;
    cin >> n >> q;
    vector<int> freq(n+1, 0);

    

    for(int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;
        if(x == 1)
        {
           freq[y]++;
        }
        else if(x == 2)
        {
           cout << freq[y] << endl;
        }
    }


    return 0;
}