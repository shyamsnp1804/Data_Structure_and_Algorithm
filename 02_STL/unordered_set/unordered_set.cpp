#include <bits/stdc++.h>
using namespace std;

void explainUnorderedSet()
{
  unordered_set<int> us; // unordered and unique means no repetition
  us.insert(10);
  us.insert(20);
  us.emplace(30); // Emplaces an element
  cout << "elements of unordered set -> ";
  for (auto i : us)
  {
    cout << i << " ";
  }
  cout << endl;

  // find
  auto it = us.find(20);
  if (it != us.end())
  {
    cout << "found" << " " << *it;
  }
  else
    cout << "not found";
  cout << endl;
  // erase
  us.erase(20);
  cout << "elements of unordered set after erasing -> ";
  for (auto i : us)
  {
    cout << i << " ";
  }
}
int main()
{
  explainUnorderedSet();
  return 0;
}