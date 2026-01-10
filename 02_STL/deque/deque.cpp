#include <bits/stdc++.h>
using namespace std;

void explainDeque()
{
  deque<int> dq = {10, 20, 30};
  dq.push_front(11); // Insert at the beginning
  dq.push_back(22);  // Insert at the end
  for (auto i : dq)
  {
    cout << i << " ";
  }
}

int main()
{
  explainDeque();
}