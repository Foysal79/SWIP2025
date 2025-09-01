#include <bits/stdc++.h>
using namespace std;
int main(){

//* Queue function || First is First Out (FIFO) , Last is Last Out (LILO)
//  queue<int> q;
// q.push(10);
// q.push(3);
// q.push(50);
// q.push(45);
// q.push(38);
// q.push(91);
// cout << q.front() << endl;
// cout << q.back() << endl; 
// cout << q.size() << endl;
// cout << endl;
// while(!q.empty())
// {
//     cout << q.front() << " ";
//     q.pop(); 
// }

//* DeQueue || vector behabier || both side end stile Queue style

deque<int> dq;
dq.push_back(10);
dq.push_back(345);
dq.push_back(56);
dq.push_back(23);
dq.push_back(89);
dq.push_front(3);


for(int x : dq)
{
   cout << x << " ";
}

}