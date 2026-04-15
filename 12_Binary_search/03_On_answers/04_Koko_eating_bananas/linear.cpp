#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
  int findMax(vector<int> &nums)
  {
    int maxi = INT_MIN;

    for (int i = 0; i < nums.size(); i++)
    {
      maxi = max(maxi, nums[i]);
    }
    return maxi;
  }

  int calculateTotalHours(vector<int> &nums, int bananas)
  {
    long long totalHour = 0;

    for (int i = 0; i < nums.size(); i++)
    {
      totalHour += ceil((double)nums[i] / (double)bananas);
    }
    return totalHour;
  }

public:
  int minimumRateToEatBananas(vector<int> nums, int h)
  {
    int maxi = findMax(nums);

    for (int banana = 1; banana <= maxi; banana++)
    {
      long long reqTime = calculateTotalHours(nums, banana);

      if (reqTime <= (long long)h)
      {
        return banana;
      }
    }
    return maxi;
  }
};

int main()
{
  vector<int> v = {7, 15, 6, 3};
  int h = 8;

  Solution sol;

  int ans = sol.minimumRateToEatBananas(v, h);

  cout << "Koko should eat at least " << ans << " bananas/hr.\n";

  return 0;
}

// Time Complexity:O(max * N) and Space Complexity is O(1).