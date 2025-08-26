#include <bits/stdc++.h>
using namespace std;
int main(){

int n;
cin >> n;
int a[n], i, index;
for(i = 0; i < n; i++)
{
    cin >> a[i];
}

cin >> index;
for(i = index; i < n - 1; i++)
{
    a[i] = a[i+1];
}

for(i = 0; i < n-1; i++)
{
    cout << a[i] << endl;
}


    return 0;
}