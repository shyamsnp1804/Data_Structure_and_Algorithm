#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int smallestDivisor(vector<int> &nums, int limit)
  {
  }
};

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5};
  int limit = 8;

  Solution sol;

  int ans = sol.smallestDivisor(arr, limit);

  cout << "The minimum divisor is: " << ans << "\n";

  return 0;
}
