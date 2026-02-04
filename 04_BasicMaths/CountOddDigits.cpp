#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  int countOddDigit(int n)
  {
    int count = 0;
    while (n > 0)
    {
      int lastDigit = n % 10;
      if (lastDigit % 2 == 1)
      {
        count = count + 1;
      }
      n = n / 10;                  // Time Complexity: O(log10(N)) and Space Complexity: O(1)
    }
    return count;
  }
};

int main()
{
  int n;
  cout << "enter number : ";
  cin >> n;
  Solution sol;
  int ans = sol.countOddDigit(n);
  cout << "The count of odd digits in the given number is: " << ans;
  return 0;
}