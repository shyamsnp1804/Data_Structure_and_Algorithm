#include <bits/stdc++.h>
using namespace std;

void explainReverse()
{
  vector<int> v = {1, 2, 3, 4, 5};
  // The `reverse` function reverses the order of elements in a range [first, last].
  reverse(v.begin(), v.end());
  for (int x : v)
  {
    cout << x << " ";
  }
}
int main()
{
  explainReverse();
  return 0;
}