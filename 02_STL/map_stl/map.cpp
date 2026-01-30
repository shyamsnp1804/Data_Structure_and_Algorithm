#include <bits/stdc++.h>
using namespace std;

void explainMap()
{
  map<int, string> mpp; // stores key-value pairs in a sorted order based on the keys.
  mpp[1] = "abc";
  mpp[3] = "abc";
  mpp[4] = "abc";
  mpp[2] = "abc";
  mpp.insert({5, "Raj"});
  mpp.emplace(6, "Ram");

  for (auto it : mpp)
  {
    cout << it.first << "->" << it.second << endl;
  }

  auto it = mpp.find(7);
  if (it == mpp.end())
  {
    cout << "not found";
  }
  else
  {
    cout << (*it).first << "->" << (*it).second << endl;
  }
  cout << endl;

  // size
  cout << "size of map -> " << mpp.size() << endl;
  ;

  // lowerbound
  auto itlb = mpp.lower_bound(4);
  if (itlb == mpp.end())
  {
    cout << "not found";
  }
  else
  {
    cout << "lower_bound ->" << " " << (*itlb).first << "->" << (*itlb).second << endl;
  }

  // upper bound
  auto itup = mpp.upper_bound(4);
  if (itup == mpp.end())
  {
    cout << "not found";
  }
  else
  {
    cout << "upper_bound ->" << " " << (*itup).first << "->" << (*itup).second << endl;
  }

  // empty
  cout << "map is" << " " << (mpp.empty() ? "Empty" : "Not Empty");
}

int main()
{
  explainMap();
  return 0;
}