#include <bits/stdc++.h>
using namespace std;

void explainDeque()
{
  deque<int> dq = {10, 20, 30};
  dq.push_front(11); // Insert at the beginning
  dq.push_back(22);  // Insert at the end
  cout << "elements of deque after insert operation -> ";
  for (auto i : dq)
  {
    cout << i << " ";
  }
  cout << endl;
  dq.pop_back();
  dq.pop_front();
  cout << "elements of deque after pop operation -> ";
  for (auto i : dq)
  {
    cout << i << " ";
  }
  cout << endl;
}

int main()
{
  explainDeque();
}