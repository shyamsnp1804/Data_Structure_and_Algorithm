#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  int reverseNumber(int n)
  {
    int ReverseNum = 0;
    while (n > 0)
    {
      int lastDigit = n % 10;
      ReverseNum = (ReverseNum * 10) + lastDigit;
      n = n / 10;
    }
    return ReverseNum;
  }
};

int main()
{
  int n;
  cout << "enter number : ";
  cin >> n;
  Solution sol;
  int ans = sol.reverseNumber(n);
  cout << "The reverse number is: " << ans;
  return 0;
}