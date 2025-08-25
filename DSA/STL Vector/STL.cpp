#include <bits/stdc++.h>
using namespace std;
int main()
{

    //* vector initialisono
    int n;
    cin >> n;
    vector<int> v(n); // only initial
    // vector<int> v = {1, 2, 3, 5};   // vector number initial
    // vector<int> v(10);              //with size initial
    // vector<int> v(10, 5);              //size with index value

    // cout << v.capacity() << endl;      // vector index size
    // cout << v.size() << endl;           // vector element number
    // v.shrink_to_fit();                  // capacity reduce only size element number
    //* input dynamic way
    //  for(int i = 0; i < n; i++)
    //  {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    //  }

    //* shortcut input . must be vector size define before v(n);
    for (int &c : v)
    {
        cin >> c;
    }

    //* output with reference
    // for (int &c : v)
    // {
    //     cout << c << " ";
    // }

    // //* output with out reference
    // for(int c : v)
    // {
    //     cout << c << " ";
    // }

    // cout << v.at(7) << endl;               // alert for range cross
    // cout << v[7] << endl;                  // don't alert for range cross

    // v.pop_back();                            // back one element delate
    // cout << v.back() << endl;                // back element output
    // v.insert(v.begin() + 1, 100);               // pointer base work 0 index start
    // v.erase(v.begin()+2, v.begin() + 5  );      // range delate
    // v.clear();                                  // vector clear
    // v.empty()                                    // vector is if empty 1,  else 0
    // sort(v.begin(), v.end());                    // sort vector
     sort(v.begin(), v.end(), greater<int>());      // sort but reverse way
    // reverse(v.begin(), v.end());                 // reverse vector


    //* vector iterator ( traves = iterat , Use an iterator to traverse that. )
    // vector<int>::iterator it;
    // // it = v.begin();
    // // it = v.end() - 1;
    // for (it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    //* iterator auto c++14
    // for(auto it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    
    for(auto &c : v)
    {
        cout << c << " ";
    }
    return 0;
}