#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool palindromeCheck(string &s)
  {
    int start = 0;
    int end = s.length() - 1;

    while (start < end)
    {
      if (s[start] != s[end])
      {
        return false;
      }
      start++;
      end--;
    }
    return true;
  }
};

int main()
{
  Solution solution;
  string str = "racecar";

  if (solution.palindromeCheck(str))
  {
    cout << str << " is a palindrome." << endl;
  }
  else
  {
    cout << str << " is not a palindrome." << endl;
  }

  return 0;
}
