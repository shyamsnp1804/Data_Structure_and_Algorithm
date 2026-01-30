#include <bits/stdc++.h>
using namespace std;

void explainUnorderedMap()
{
  unordered_map<int, string> mpp; // stores key-value pairs in unsorted order based on the keys and keys should be unique.
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
  cout << "size of unordered map -> " << mpp.size() << endl;

  // empty
  cout << "unordered map is" << " " << (mpp.empty() ? "Empty" : "Not Empty");
}

int main()
{
  explainUnorderedMap();
  return 0;
}