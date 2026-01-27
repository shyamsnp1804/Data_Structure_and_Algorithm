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
  ms.insert(88);
  ms.insert(99);
  ms.insert(99);
  ms.insert(99);
  ms.insert(99);
  cout << "elements of multiset -> ";
  for (auto i : ms)
  {
    cout << i << " ";
  }
  cout << endl;

  // erase
  ms.erase(99); //  erase all occurence of an element here it is 99
  cout << "elements of multiset after erasing -> ";
  for (auto i : ms)
  {
    cout << i << " ";
  }
  cout << endl;

  // erase only one occurence of an element
  ms.erase(ms.find(88)); // erase only first 88 because ms.find() is an iterator it will point to location
  cout << "elements of ms after erasing only one 88 -> ";
  for (auto i : ms)
  {
    cout << i << " ";
  }
  cout << endl;

  // erasing elements in range
  auto it1 = ms.begin();
  it1++;
  auto it2 = ms.end();
  it2--;

  ms.erase(it1, it2);
  cout << "elements of multiset after erasing in range -> ";
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