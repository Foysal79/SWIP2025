#include <bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin >> n;
     int ar[n];
     for(int i = 0; i < n; i++) cin >> ar[i];

     int temp = ar[n-1];
     for(int i = n - 1; i > 0; i--){
      ar[i] = ar[i-1];
     }
     ar[0] = temp;
     for(int i = 0; i < n; i++) cout << ar[i] << " ";

    return 0;
}