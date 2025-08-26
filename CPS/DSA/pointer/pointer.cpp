#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n ;
 vector<int> v;
//  vector<int> v(5);
//  vector<int> v = {1, 2, 3, 4};
// vector<int> v(4, 0);

for(int i = 0; i < n; i++)
{
  int x;
  cin >> x;
  v.push_back(x);
}

// v.insert(v.begin()+1, 100);
// v.insert(v.begin()+1, 100);
// v.insert(v.begin()+1, 100);
// v.erase(v.begin()+1, v.begin()+2);

// for(int x : v)
// {
//   cout << x << " ";
// }
// cout << endl;

//----------------- iterator------------------
// vector<int>::iterator it;
// for(it = v.begin(); it != v.end(); it++)
// cout << *it << endl;

// for(auto it = v.begin(); it != v.end(); it++)
// cout << *it << endl;

//------------------sort -------------------
// sort(v.begin(), v.end());
// sort(v.begin(), v.end(), greater<int>());
// reverse(v.begin(), v.end());

//-----------------------index find -----------------
// auto it = find(v.begin(), v.end(), 20);
// cout << it - v.begin() << endl;


//-------------------------------uniqe value or track or frequency-------
// sort(v.begin(), v.end());
// auto last = unique(v.begin(), v.end());
// v.erase(last, v.end());



//--------------------------------
// auto it = min_element(v.begin(), v.end());
// auto it2 = max_element(v.begin(), v.end());


//-----------------cout--------------
// auto it = count(v.begin(), v.end(), 2);
// cout << it << endl;


// rotate(v.begin(), v.begin()+2, v.end());




for(auto &x : v) {
  cout << x << " ";
}

    return 0;
}