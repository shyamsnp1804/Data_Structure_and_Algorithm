#include <bits/stdc++.h>
using namespace std;

void explainMaxElement()
{
  vector<int> v = {1, 5, 3, 9, 7};
  // The `max_element` function returns an iterator to the largest element in a range [first, last].
  auto it = max_element(v.begin(), v.end());
  cout << "Max Element: " << *it;
}

int main()
{
  explainMaxElement();
  return 0;
}