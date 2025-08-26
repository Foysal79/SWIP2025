#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   vector <int> v(n);
   vector<int> freq(16, 0);

   for(int &x : v)
   cin >> x;

   for(int &x : v)
   {
    freq[x]++;
   }
   sort(v.begin(), v.end());
   v.erase(unique())

    return 0;
}