#include <bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    getline(cin, str);
    // cin >> str ;
    // str.push_back('e');
    // str += " World";
    // str.insert(2, "FOYSAL");
    // str.erase(1, 3); // index number and how many element
    // str.erase(4); // index number to last index delate
    // str.replace(6 , 9, "h");
    // sort(str.begin(), str.end(), greater<char>());


    //* file name finding 

    int idx = str.find_last_of('/');
     string str1 = str.substr(idx + 1 , str.size());


     

    cout << str1 << endl;

    return 0;
}
