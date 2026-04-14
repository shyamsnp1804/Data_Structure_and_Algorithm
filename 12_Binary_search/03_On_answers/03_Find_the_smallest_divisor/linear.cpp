#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int smallestDivisor(vector<int> &nums, int limit)
  {
    int n = nums.size();

    int maxi = *max_element(nums.begin(), nums.end());

    for (int d = 1; d <= maxi; d++)
    {
      int sum = 0;

      for (int j = 0; j < n; j++)
      {
        sum += ceil((double)nums[j] / double(d));
      }
      if (sum <= limit)
      {
        return d;
      }
    }
    return -1;
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
