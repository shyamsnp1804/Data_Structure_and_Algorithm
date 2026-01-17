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
}

int main()
{
  explainSet();
  return 0;
}