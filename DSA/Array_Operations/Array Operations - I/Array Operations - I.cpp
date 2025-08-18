#include <bits/stdc++.h>
using namespace std;
void insertArray(int ar[], int n, int x, int val)
{
    for (int i = n - 1; i >= x; i--)
    {
        ar[i + 1] = ar[i];
    }
    ar[x] = val;
    // print array after insert array index
    for (int i = 0; i < n + 1; i++)
        cout << ar[i] << " ";
}

void delateOperation(int ar[], int n, int x)
{
    for (int i = x + 1; i < n; i++)
    {
        ar[i - 1] = ar[i];
    }
    // print array after array (n - 1)
    for (int i = 0; i < n - 1; i++)
    {
        cout << ar[i] << " ";
    }
}
void reverseAnArray(int ar[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        swap(ar[i], ar[n - i - 1]);
    }
    // after reverse array print
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
}

int main()
{
    //* Insert at Any Index
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    // int x, val;
    // cin >> x >> val;
    //* insertArray(ar, n, x, val);
    //* delateOperation(ar, n, x);
    //* reverseAnArray(ar, n);
    return 0;
}