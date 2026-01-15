#include <bits/stdc++.h>
using namespace std;

void explainPriorityQueue()
{
  // Max Heap
  priority_queue<int> pq; // largest element on top

  pq.push(10);
  pq.push(17);
  pq.push(16);
  pq.push(18);
  pq.push(14);

  cout << "top element is -> " << pq.top() << endl;
  cout << "printing element in descending order (max_heap) -> ";
  while (pq.empty() == false)
  {
    cout << pq.top() << " ";
    pq.pop();
  }
  cout << endl;
  // Min Heap
  priority_queue<int, vector<int>, greater<int>> pq2; // smallest element on top
  pq2.push(10);
  pq2.push(17);
  pq2.push(16);
  pq2.push(18);
  pq2.push(14);

  cout << "top element is -> " << pq2.top() << endl;
  cout << "printing element in ascending order (min_heap) -> ";
  while (pq2.empty() == false)
  {
    cout << pq2.top() << " ";
    pq2.pop();
  }
  cout << endl;
}

int main()
{
  explainPriorityQueue();
  return 0;
}