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
    string concatS = s + s;
    return concatS.find(goal) != string::npos;
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