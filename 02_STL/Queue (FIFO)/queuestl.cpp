#include <bits/stdc++.h>
using namespace std;

void explainQueue()
{
  queue<int> q;
  q.push(10);
  q.push(11);
  q.push(12);
  q.push(13);
  q.push(14);
  q.emplace(20); // Emplace is similar to push

  cout << "Size of queue: " << q.size() << endl;

  while (q.empty() == false)
  {
    cout << q.front() << " ";
    q.pop();
  }
  cout << endl;
  cout << "Size of queue: " << q.size() << endl;

  queue<int> q2;
  q2.push(101);
  q2.push(112);
  q2.push(123);
  q2.push(134);
  q2.push(145);
  q2.emplace(206); // Emplace is similar to push

  queue<int> q3;
  q3.push(106);
  q3.push(115);
  q3.push(124);
  q3.push(133);
  q3.push(142);
  q3.emplace(201); // Emplace is similar to push

  q2.swap(q3);
  cout << "Front element of q2 after swap: " << q2.front() << endl;
  cout << "Front element of q3 after swap: " << q3.front() << endl;
}

int main()
{
  explainQueue();
  return 0;
}