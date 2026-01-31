#include <bits/stdc++.h>
using namespace std;

void explainFind()
{
  vector<int> v = {1, 2, 3, 4, 5};
  auto it = find(v.begin(), v.end(), 5);
  if (it != v.end())
    cout << "found" << " " << *it;
  else
    cout << "not found";
}

int main()
{
  explainFind();
  return 0;
}