#include <bits/stdc++.h>
using namespace std;
int main(){

//* Queue function || First is First Out (FIFO) , Last is Last Out (LILO)
 queue<int> q;

q.push(10);
q.push(3);
q.push(50);
q.push(45);
q.push(38);
q.push(91);

cout << q.front() << endl;
cout << q.back() << endl; 
cout << q.size() << endl;
cout << endl;
while(!q.empty())
{
    cout << q.front() << " ";
    q.pop(); 
}

}