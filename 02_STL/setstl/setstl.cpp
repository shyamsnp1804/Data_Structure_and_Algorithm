#include <bits/stdc++.h>
using namespace std;

void explainSet()
{
  set<int> st; // store unique element in ascending order
  st.insert(16);
  st.insert(14);
  st.insert(12);
  st.insert(13);
  cout << "elements of set are -> ";
  for (auto i : st)
  {
    cout << i << " ";
  }
  cout << endl;

  // finding element in set
  auto i = st.find(14);
  if (i != st.end()) // s.end() → points one position past last element in set
  {
    cout << "found " << *i << " ";
  }
  else
  {
    cout << "not found";
  }
  cout << endl;

  // erase
  st.erase(14);
  for (auto i : st)
  {
    cout << i << " ";
  }
  cout << endl;
  // lower_bound(x) -> returns First element ≥ x
  auto it = st.lower_bound(14);
  if (it != st.end())
  {
    cout << "lower_bound element is -> " << *it << "";
  }
  else
  {
    cout << "element not found";
  }
  cout << endl;
  // upper_bound(x) -> returns First element > x
  auto itub = st.upper_bound(12);
  if (itub != st.end())
  {
    cout << "upper_bound element is -> " << *itub << "";
  }
  else
  {
    cout << "element not found";
  }
}

int main()
{
  explainSet();
  return 0;
}