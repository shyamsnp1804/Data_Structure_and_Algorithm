#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  void reverseString(vector<char> &s)
  {
    stack<char> st;
    // push into stack
    for (auto it : s)
    {
      st.push(it);
    }
    // pop from stack
    for (int i = 0; i < s.size(); ++i)
    {
      s[i] = st.top();
      st.pop();
    }
    return;
  }
};

int main()
{
  vector<char> str = {'h', 'e', 'l', 'l', 'o'};
  Solution sol;
  sol.reverseString(str);

  for (auto it : str)
  {
    cout << it << " ";
  }
  return 0;
}