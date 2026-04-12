#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int floorSqrt(int n)
  {
    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
      long long val = 1LL * i * i;

      if (val <= (long long)n)
      {
        ans = i;
      }
      else
      {
        break;
      }
    }
    return ans;
  }
};

int main()
{
  int n = 28;

  Solution sol;

  int ans = sol.floorSqrt(n);

  cout << "The floor of square root of " << n
       << " is: " << ans << "\n";

  return 0;
}