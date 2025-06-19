#include <bits/stdc++.h>
using namespace std;
int main()
{

 int i, n;
 cin >> n;
 int a[n];
 for(i = 0; i < n; i++) cin >> a[i];

 bool ans = true;
 for(i = 0; i < n -1 ; i++)
 {
    if(a[i] > a[i+1])
    {
        ans = false;
        break;
    }
 }

 cout << ans << endl;

    return 0;
}