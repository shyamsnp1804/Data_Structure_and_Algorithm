#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool rotateString(string &s, string &goal)
  {
    if (s.length() != goal.length())
    {
      return false;
    }
    for (int i = 0; i < s.length(); i++)   // Time Complexity O(N^2) and Space Complexity O(N)
    {
      string rotated = s.substr(i) + s.substr(0, i);
      if (rotated == goal)
        return true;
    }
    return false;
  }
};

int main()
{
  string s, goal;
  cout << "enter first string : ";
  cin >> s;
  cout << "enter second string : ";
  cin >> goal;

  Solution sol;
  bool ans = sol.rotateString(s, goal);
  if (ans)
    cout << "true";
  else
    cout << "false";
  return 0;
}