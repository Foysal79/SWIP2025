#include <bits/stdc++.h>
using namespace std;
void reverse(int i, int j, int ar[])
{
    while (i < j)
    {
        swap(ar[i], ar[j]);
        i++;
        j--;
    }
}
int main()
{

    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    int k;
    cin >> k;
    k %= n;

    reverse(0, n - 1, ar);
    reverse(0, k - 1, ar);
    reverse(k, n - 1, ar);

     for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
}
