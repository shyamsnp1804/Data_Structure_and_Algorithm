#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool anagramStrings(string &s, string &t)
  {
    if (s.length() != t.length())
      return false;

    // To store the count of each character
    vector<int> count(26, 0);

    for (int i = 0; i < s.length(); i++) // T.C → O(n) and S.C → O(1) (fixed 26 size)
    {
      count[s[i] - 'a']++;
      count[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++)
    {
      if (count[i] != 0)
      {
        return false;
      }
    }
    return true;
  }
};

int main()
{
  string str1 = "integer";
  string str2 = "tegerni";

  Solution sol;

  bool result = sol.anagramStrings(str1, str2);

  if (result)
    cout << "The given strings are anagrams.";
  else
    cout << "The given strings are not anagrams.";

  return 0;
}