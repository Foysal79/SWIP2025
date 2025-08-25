#include <bits/stdc++.h>
using namespace std;
int main()
{

    //* vector initialisono
    int n;
    cin >> n;
    vector<int> v(n); // only initial
    // vector<bool> track(10, false);      // vector track
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
    // sort(v.begin(), v.end(), greater<int>());      // sort but reverse way
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

    //* find a number
    // auto it = find(v.begin(), v.end(), 4);
    // int find_Element_Positions = it - v.begin();
    // cout << find_Element_Positions << endl;

    //* vector track or unique value
    // for (auto c : v)
    // {
    //     if (track[c] == false)
    //     {
    //         cout << c << " ";
    //         track[c] = true;
    //     }
    // }
   
    //* anather way uniqe finding
    //sort(v.begin(), v.end());
    //auto last =  unique(v.begin(), v.end());
    //v.erase(last, v.end());

    //* maximum and minimum number
    // auto min_it = min_element(v.begin(), v.end());
    // auto mx_it = max_element(v.begin(), v.end());
    // cout << *min_it << " " << *mx_it << endl;

   // cout << count(v.begin(), v.end(), 90) << endl;   // digit count
    for (auto c : v)
    {

        cout << c << " ";
    }

    return 0;
}