#include <bits/stdc++.h>
using namespace std;

void fun(int *p)
{
 *p = 100;
}

int main()
{
//  int a = 10;
//  int *p = &a;
//  int * *q = &p;
// **q = 20;
//  cout << **q << endl;


// int a[] = {1, 3, 2, 6, 3};
// cout << *(a+1) << " " << &a[1] << endl;

int x = 10;
fun(&x);
cout << x << endl;

    return 0;
}