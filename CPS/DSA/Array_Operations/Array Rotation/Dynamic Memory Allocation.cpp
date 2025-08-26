#include <bits/stdc++.h>
using namespace std;
int main()
{

    // int *p = new int;
    // *p = 10;
    // cout << *p << endl;

    //* dynamic memory alocation array
    // int n = 5;
    // int *a = new int[n];
    // for (int i = 0; i < n; i++)
    // {
    //     a[i] = i;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }

    int oldSize = 8;
    int *oldArray = new int[oldSize];
    for (int i = 0; i < oldSize; i++)
    {
        oldArray[i] = i * 2;
    }

    int newSize = 8;
    int *newArray = new int[newSize];
    for (int i = 0; i < newSize; i++)
    {
        newArray[i] = oldArray[i];
    }

    delete[] oldArray;

    for (int i = 0; i < newSize; i++)
    {
        cout << newArray[i] << " ";
    }

    return 0;
}