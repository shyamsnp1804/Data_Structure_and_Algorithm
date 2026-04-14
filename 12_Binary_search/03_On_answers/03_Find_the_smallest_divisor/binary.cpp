#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
  int findSum(vector<int> &nums, int divisor)
  {
    int sum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
      sum += ceil((double)(nums[i]) / (double)(divisor));
    }
    return sum;
  }

public:
  int smallestDivisor(vector<int> &nums, int limit)
  {
    int low = 1;
    int high = *max_element(nums.begin(), nums.end());
    int ans = high;

    while (low <= high)
    {

      int mid = low + (high - low) / 2;

      int sum = findSum(nums, mid);

      if (sum <= limit)
      {
        ans = mid;
        high = mid - 1;
      }
      else
      {
        low = mid + 1;
      }
    }
    return ans;
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
