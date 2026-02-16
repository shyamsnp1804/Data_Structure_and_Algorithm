#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool isomorphicString(string s, string t)
  {

    // If lengths are different, they cannot be isomorphic
    if (s.length() != t.length())
      return false;

    // Map to store s -> t mapping
    unordered_map<char, char> mp1;

    // Map to store t -> s mapping (to ensure one-to-one relation)
    unordered_map<char, char> mp2;

    int n = s.length();

    for (int i = 0; i < n; i++)
    {

      char ch1 = s[i]; // Character from first string
      char ch2 = t[i]; // Character from second string

      /*
        Check 1:
        If ch1 already mapped and mapping is different → invalid

        Check 2:
        If ch2 already mapped and mapping is different → invalid
      */
      if ((mp1.find(ch1) != mp1.end() && mp1[ch1] != ch2) ||
          (mp2.find(ch2) != mp2.end() && mp2[ch2] != ch1))
      {
        return false;
      }

      // Store the mapping
      mp1[ch1] = ch2;
      mp2[ch2] = ch1;
    }

    // If no conflicts found, strings are isomorphic
    return true;
  }
};

int main()
{

  Solution obj;

  string s, t;

  cout << "Enter first string: ";
  cin >> s;

  cout << "Enter second string: ";
  cin >> t;

  if (obj.isomorphicString(s, t))
    cout << "Strings are Isomorphic " << endl;
  else
    cout << "Strings are NOT Isomorphic " << endl;

  return 0;
}

// Time Complexity = O(n)
// Space	O(n) (or O(1) if fixed charset)