#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int floorSqrt(int n)
  {
    if (n == 0)
      return 0; // edge case

    int low = 1, high = n;
    int ans = 0;

    while (low <= high)
    {
      int mid = low + (high - low) / 2;

      if (mid <= n / mid)
      {
        ans = mid;
        low = mid + 1;
      }
      else
      {
        high = mid - 1;
      }
    }
    return ans;
  }
};

int main()
{
  int n = 28; // Input number

  Solution sol;

  int ans = sol.floorSqrt(n);

  cout << "The floor of square root of " << n
       << " is: " << ans << "\n";

  return 0;
}