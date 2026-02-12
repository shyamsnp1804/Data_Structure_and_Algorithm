#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  string largeOddNum(string &s)
  {
    int j = -1;                               // -1 represents "no odd digit found yet"
    for (int i = s.length() - 1; i >= 0; i--) // Iterate through the string from the end to beginning
    {
      if ((s[i] - '0') % 2 == 1)
      {
        j = i;
        break;
      }
    }
    // Skipping any leading zeroes
    int i = 0;
    while (i <= j && s[i] == '0')
      i++;
    return s.substr(i, j - i + 1); // Return the largest odd number substring
  }
};

int main()
{
  string num = "015873";
  Solution sol;
  string ans = sol.largeOddNum(num);
  cout << "Largest odd number: " << ans << endl;
  return 0;
}
