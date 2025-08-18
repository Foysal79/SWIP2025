#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++) cin >> b[i];

    int c[n + m]; // merged array
    int i = 0, j = 0, k = 0;

    // Merge two sorted arrays
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }

    // Copy remaining elements of a[]
    while (i < n)
    {
        c[k++] = a[i++];
    }

    // Copy remaining elements of b[]
    while (j < m)
    {
        c[k++] = b[j++];
    }

    // Print the merged array
    for (int i = 0; i < n + m; i++)
    {
        cout << c[i] << " ";
    }

    cout << endl;
    return 0;
}
