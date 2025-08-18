#include <bits/stdc++.h>
using namespace std;
int main()
{
   int i, j , n, m;
   cin >> n;
   int a[n];
//    1st array input
   for(i = 0; i < n; i++) cin >> a[i];
   cin >> m;
   int b[m];
//    2nd array input
   for(i = 0; i < m; i++) cin >> b[i];
// marge operation
   int c[n+m];
   for(i = 0; i < n; i++)
   {
     c[i] = a[i];
   }
   for(i = 0; i < m; i++)
   {
    c[n+i] = b[i];
   }
   for(i = 0; i < m+n; i++)
   {
    cout << c[i] << " ";
   }


    return 0;
}