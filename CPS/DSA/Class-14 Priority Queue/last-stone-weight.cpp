#include <bits/stdc++.h>
using namespace std;
int main()
{
    // input n and array
    int n; cin >> n;
    vector<int> stones(n);
    for(int &stone : stones)
    {
        cin >> stone;
    }

    // operations
    priority_queue<int> pq;
    for(int c : stones)
    {
      pq.push(c);
    }
    int first_max = pq.top();
    while(!pq.empty() && pq.top() == first_max) 
    {
        pq.pop();
    }
    bool second_max = false;
    if(!pq.empty())
    {
        int sMax = pq.top();
        while(pq.size() > 0 && pq.top() == sMax) pq.pop();
    }
    if(!pq.empty())
    {
        cout << pq.top() << endl;
        return 0;
    }
    cout << first_max << endl;



  

    return 0;
}