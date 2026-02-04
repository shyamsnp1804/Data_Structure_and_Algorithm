#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  int largestDigit(int n)
  {
    int LargestDigit = 0;
    while (n > 0)
    {
      int lastDigit = n % 10;
      if (lastDigit > LargestDigit)
      {
        LargestDigit = lastDigit;
      }
      n = n / 10;                   // Time Complexity: O(log10(N))  and Space Complexity: O(1)
    }
    return LargestDigit;
  }
};

int main()
{
  int n;
  cout << "enter number : ";
  cin >> n;
  Solution sol;
  int ans = sol.largestDigit(n);
  cout << "The largest digit is: " << ans;
  return 0;
}