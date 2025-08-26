#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int ar[n];
    int newArray[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int k;
    cin >> k;
    k = k % n;
    for (int i = 0; i < n; i++)
    {
        int index = (i - k + n) % n;
        newArray[index] = ar[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << newArray[i] << " ";
    }

    return 0;
}