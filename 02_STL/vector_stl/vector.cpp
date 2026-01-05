#include <bits/stdc++.h>
using namespace std;

void explainVector()
{
  vector<int> vec;
  vec.push_back(3); // push_back() inserts element in vector
  vec.push_back(2);
  vec.push_back(1);
  vec.emplace_back(0); // you can also use emplace_back() to insert element in vector
  cout << vec.size() << endl;

  // vector also store elements in same manner as array i.e, 0 based indexing -> [3,2,1,0]
  // print vector element
  for (int i = 0; i < vec.size(); i++)
  {
    cout << vec[i] << " ";
  }
  cout << endl;

  // print vector element
  for (auto i : vec)
  {
    cout << i << " ";
  }
  cout << endl;
}
int main()
{
  explainVector();
  return 0;
}