#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  void reverseString(vector<char> &s)
  {
    int start = 0;
    int end = s.size() - 1;

    while (start < end)
    {
      char ch = s[start];
      s[start] = s[end];
      s[end] = ch;

      start++, end--;        // Time Complexity O(N) and SpaceComplexity O(1)
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