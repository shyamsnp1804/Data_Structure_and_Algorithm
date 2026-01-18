#include <bits/stdc++.h>
using namespace std;

void explainSet()
{
  set<int> st; // store unique element in ascending order
  st.insert(16);
  st.insert(14);
  st.insert(12);
  st.insert(13);

  for (auto i : st)
  {
    cout << i << " ";
  }
  cout << endl;
  auto i = st.find(14);
  if (i != st.end())
  {
    cout << "found " << *i << " ";
  }
  else
  {
    cout << "not found";
  }
}

int main()
{
  explainSet();
  return 0;
}