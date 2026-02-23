#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
  void reverse(vector<char> &s, int left, int right)
  {
    // base case
    if (left >= right)
      return;
    // swap character
    char temp = s[left];
    s[left] = s[right];
    s[right] = temp;
    // recursive call
    reverse(s, left + 1, right - 1);
  }

public:
  vector<char> reverseString(vector<char> &s)
  {
    int left = 0;
    int right = s.size() - 1;
    reverse(s, left, right);
    return s;
  }
};

int main()
{
  vector<char> s = {'s', 'h', 'y', 'a', 'm'};
  Solution sol;
  vector<char> reversed = sol.reverseString(s);
  for (auto it : reversed)
  {
    cout << it << " ";
  }
  return 0;
}