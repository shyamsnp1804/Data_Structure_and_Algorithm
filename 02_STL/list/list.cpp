#include <bits/stdc++.h>
using namespace std;

void explainList()
{
  list<int> lst = {10, 20, 30};
  lst.push_front(11);    // push_front() insert at the beginning
  lst.emplace_front(12); // emplace_front() construct at the beginning
  cout << "elements of list are -> ";
  for (auto i : lst)
  {
    cout << i << " ";
  }
  cout << endl;
  lst.pop_front();
  cout << "elements after poping first element -> ";
  for (auto i : lst)
  {
    cout << i << " ";
  }
}

int main()
{
  explainList();
  return 0;
}