#include <bits/stdc++.h>
using namespace std;

void explainMultiSet()
{
  // insert
  multiset<int> ms;
  ms.insert(91);
  ms.insert(89);
  ms.insert(96);
  ms.insert(88);
  ms.insert(99);
  cout << "elements of multiset -> ";
  for (auto i : ms)
  {
    cout << i << " ";
  }
  cout << endl;

  // erase
  ms.erase(99);
  cout << "elements of multiset after erasing -> ";
  for (auto i : ms)
  {
    cout << i << " ";
  }
  cout << endl;

  // erasing specific element
  auto it1 = ms.begin();
  it1++;
  auto it2 = ms.end();
  it2--;

  ms.erase(it1, it2);
  cout << "elements of multiset after erasing specific elements -> ";
  for (auto iter : ms)
  {
    cout << iter << " ";
  }
}

int main()
{
  explainMultiSet();
  return 0;
}