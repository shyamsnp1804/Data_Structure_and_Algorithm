#include <bits/stdc++.h>
using namespace std;

void explainNextPermutation()
{
  vector<int> v = {1, 2, 3};

  sort(v.begin(), v.end());

  do
  {
    for (int x : v)
      cout << x << " ";
    cout << endl;
  } while (next_permutation(v.begin(), v.end()));
}

int main()
{
  explainNextPermutation();
  return 0;
}