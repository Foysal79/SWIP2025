#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    int ar[n];
    int cArray[n];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    int k;
    cin >> k;
    k %= n;
    for (int i = 0; i < n; i++)
    {
        int index = (i + k) % n;
        cArray[index] = ar[i];
    }

    for (int i = 0; i < n; i++)
        cout << cArray[i] << " ";

    return 0;
}