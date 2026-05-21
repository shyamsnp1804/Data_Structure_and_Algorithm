#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  double myPow(double x, int n)
  {
    // base case
    if (n == 0 || x == 1.0)
      return 1;

    // store in long long to avoid integer overflow
    long long temp = n;

    // check negative exponent and handle it
    if (n < 0)
    {
      x = 1 / x;
      temp = -1 * 1LL * n;
    }

    double ans = 1;

    for (long long i = 0; i < temp; i++)
    {
      ans *= x;
    }
    return ans;
  }
};

int main()
{
  Solution sol;

  cout << fixed << setprecision(4) << sol.myPow(2.0000, 10) << endl;
  cout << fixed << setprecision(4) << sol.myPow(2.0000, -2) << endl;

  return 0;
}