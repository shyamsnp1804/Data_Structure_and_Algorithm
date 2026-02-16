#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  string longestCommonPrefix(vector<string> &str)
  {
    if (str.empty())
      return "";
    sort(str.begin(), str.end());      // sort string
    string first = str[0];             // First string (smallest in sorted order)
    string last = str[str.size() - 1]; // Last string (largest in sorted order)

    // Compare characters of the first and last strings
    int minLength = min(first.size(), last.size());
    string res = "";
    for (int i = 0; i < minLength; i++)
    {
      if (first[i] != last[i])
      {
        return res;                 // If characters don't match, return the current prefix
      }
      res += first[i];              // Append the matching character to the result
    }
    return res;
  }
};

int main()
{
  vector<string> input = {"flower", "flow", "flight"};
  Solution sol;
  string ans = sol.longestCommonPrefix(input);
  cout << "Longest Common Prefix: " << ans << endl;
  return 0;
}