#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  bool isPalindrome(int n)
  {
    int ReverseNum = 0;
    int ogNum = n;
    while (n > 0)
    {
      int lastDigit = n % 10;
      ReverseNum = (ReverseNum * 10) + lastDigit;
      n = n / 10;                       // Time Complexity: O(log10(N))  and Space Complexity: O(1)
    }
    if (ogNum == ReverseNum)
      return true;
    else
      return false;
  }
};

int main()
{
  int n;
  cout << "enter number : ";
  cin >> n;
  Solution sol;
  int ans = sol.isPalindrome(n);
  if (ans)
    cout << "The given number is a palindrome";
  else
    cout << "The given number is not a palindrome";
  return 0;
}