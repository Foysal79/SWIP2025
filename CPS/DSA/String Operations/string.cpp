#include <bits/stdc++.h>
using namespace std;
int main()
{

    // string str;
    // getline(cin, str);
    // cin >> str ;
    // str.push_back('e');
    // str += " World";
    // str.insert(2, "FOYSAL");
    // str.erase(1, 3); // index number and how many element
    // str.erase(4); // index number to last index delate
    // str.replace(6 , 9, "h");
    // sort(str.begin(), str.end(), greater<char>());

    //* file name finding

    // int idx = str.find_last_of('/');
    // string str1 = str.substr(idx + 1, str.size());

    //* Count Frequency of Each Character
    // string a, b;
    // cin >> a >> b;
    // vector<int> freq1(26, 0);
    // vector<int> freq2(26, 0);

    // for(char x : a)
    // {
    //      freq1[x - 'a']++; 
    // }
    // for(char x : b)
    // {
    //      freq2[x - 'a']++; 
    // }
    // bool ans = true;

    // for(int i = 0; i < 26; i++)
    // {
    //     if(freq1[i] > 0)
    //     {
    //         cout << char('a' + i ) << " " << freq1[i] << endl;
    //     }
    // }


    //* vowel delate
    
    string s, r = "";
    cin >> s;

    for(char c : s)
    {
        if(string("aeiouAEIOU").find(c) == -1)
        {
            r += c;
        }
    }
    cout << r << endl;

    return 0;
}
