#include <bits/stdc++.h>
using namespace std;

bool compare(int a, int b)
{
  return a > b; // Sort in descending order
}

void explainComparator()
{
  // A comparator is a function or functor that determines the order of elements during sorting or other operations. It is often passed to functions like `sort`.

  vector<int> v = {3, 1, 4, 1, 5, 9};

  sort(v.begin(), v.end(), compare);
  for (int x : v)
  {
    cout << x << " ";
  }
}

int main()
{
  explainComparator();
  return 0;
}