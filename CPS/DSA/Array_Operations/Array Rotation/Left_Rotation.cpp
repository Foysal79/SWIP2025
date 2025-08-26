#include <bits/stdc++.h>
using namespace std;

void left_Rotation(int ar[], int n)
{
    int temporary_value = ar[0];
    for (int i = 0; i < n - 1; i++)
    {
        ar[i] = ar[i + 1];
    }
    ar[n - 1] = temporary_value;
    for (int i = 0; i < n; i++)
        cout << ar[i] << " ";
}

int main()
{

    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    left_Rotation(ar, n);

    return 0;
}