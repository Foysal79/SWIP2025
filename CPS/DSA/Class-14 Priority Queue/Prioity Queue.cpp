#include <bits/stdc++.h>
using namespace std;
int main()
{
  //* priority_queue : 
  // default bigger to smaller Or Descending order and Sorted . use ( heap Algorithm )
// Based on priority, Each element has a priority.
  // 12 9 5 4 1 0

   //* Function
   // -> initial : priority_queue<int> pq;
   // -> insert : pd.push()        
   // -> size : pq.size()        
   // -> empty : pq.empty()        
   // -> access only top or first value : pq.top()        
   // -> Delate only top or first value : pq.pop();    
   // -> one priority_queue to anther copy : priority_queue<int> temp(pq);
   // -> ascending order priority_Queue : priority_queue<int, vector<int>, greater<int>> pq_a;

   //* time complexity 
   // pd.push() -> o(log n);
   // pd.pop() -> o(log n);
   // pd.top() -> o(1);
    priority_queue<int> pq;

    pq.push(10);                        // priority_queue -> insert 
    pq.push(12);
    pq.push(2);
    pq.push(1);
    pq.push(142);
    pq.push(12);
    pq.push(152);
    pq.push(12);
    pq.push(125);
    int size = pq.size();              // priority_queue Size 
    cout << size << endl;

    while(!pq.empty())                 // priority_queue empty 
    {
          cout << pq.top() << " ";    // priority_queue top value ( default bigger to smaller // Descending order) 
          pq.pop();                    // priority_queue Delate 
    }
    cout << endl;
    
    priority_queue<int> temp(pq); // priority_queue -> pq priority_queue to temp priority_queue //*copy 

    // ascending order priority_Queue
    priority_queue<int, vector<int>, greater<int>> pq_a;
    pq_a.push(10);                        // priority_queue -> insert ascending order
    pq_a.push(12);
    pq_a.push(2);
    pq_a.push(1);
    pq_a.push(142);
    pq_a.push(12);
    pq_a.push(152);
    pq_a.push(12);
    pq_a.push(125);

   while(!pq_a.empty())
   {
    cout << pq_a.top() << " ";
    pq_a.pop();
   }
    
    


    return 0;
}