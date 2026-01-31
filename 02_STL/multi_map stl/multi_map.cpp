#include <bits/stdc++.h>
using namespace std;

void explainMultiMap()
{
  multimap<int, string> mmp; // it allows storing multiple values for the same key in a sorted order.

  mmp.insert({1, "a"});
  mmp.insert({3, "b"});
  mmp.insert({2, "c"});
  mmp.insert({2, "d"});
  mmp.insert({4, "e"});
  mmp.insert({2, "f"});

  for (auto it : mmp)
  {
    cout << it.first << "-> " << it.second << endl;
  }

  // range
  auto range = mmp.equal_range(2);
  for (auto itr = range.first; itr != range.second; itr++)
  {
    cout << (*itr).first << "->" << (*itr).second << endl;
  }
}

int main()
{
  explainMultiMap();
  return 0;
}