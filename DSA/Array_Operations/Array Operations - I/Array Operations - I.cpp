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
void reverseAnArrayUsingTwoPointer(int ar[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        swap(ar[i], ar[j]);
        i++;
        j--;
    }

    for (int k = 0; k < n; k++)
    {
        cout << ar[k] << " ";
    }
}

void mergeTwoArrays(int ar[], int ar1[], int n, int m)
{
    int ar3[n + m];
    for (int i = 0; i < n + m; i++)
    {
        if (i < n)
        {
            ar3[i] = ar[i];
        }
        else
        {
            ar3[i] = ar1[i - n];
        }

        cout << ar3[i] << " ";
    }
}

void mergeTwoSortedArrays(int ar[], int ar1[], int n, int m)
{
    int c[n + m];
    int k = 0, i = 0, j = 0;
    while (i < n && j < m)
    {
        if (ar[i] < ar1[j])
        {
            c[k++] = ar[i];
            i++;
        }
        else
        {
            c[k++] = ar1[j];
            j++;
        }
    }
    while (i < n)
        c[k++] = ar[i++];
    while (j < m)
        c[k++] = ar1[j++];

    for (int l = 0; l < m + n; l++)
        cout << c[l] << " ";
}

void checkArrayIsSorted(int ar[], int n)
{
    int flag = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (ar[i] > ar[i + 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout << "Not Sort Array" << endl;
    else
        cout << "Sort Array" << endl;
}
int main()
{
    //* Insert at Any Index
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    // second array input
    // int m;
    // cin >> m;
    // int ar1[m];
    // for (int i = 0; i < m; i++)
    // {
    //     cin >> ar1[i];
    // }

    // int x, val;
    // cin >> x >> val;
    //* insertArray(ar, n, x, val);
    //* delateOperation(ar, n, x);
    //* reverseAnArray(ar, n);
    //* reverseAnArrayUsingTwoPointer(ar, n);
    //* mergeTwoArrays(ar, ar1, n, m);
    //* mergeTwoSortedArrays(ar, ar1, n, m);
    //* checkArrayIsSorted(ar, n);

    return 0;
}