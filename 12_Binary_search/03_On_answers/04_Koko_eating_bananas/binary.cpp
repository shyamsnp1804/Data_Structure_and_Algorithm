#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
  // Helper function to calculate total hours required
  // for a given eating speed (bananas per hour)
  int calculateTotalHours(vector<int> &nums, int bananas)
  {
    long long totalHour = 0;

    // Traverse each pile
    for (int i = 0; i < nums.size(); i++)
    {
      // Time = ceil(pile / bananas per hour)
      totalHour += ceil((double)nums[i] / (double)bananas);
    }

    return totalHour;
  }

public:
  //  Main function to find minimum eating speed (k)
  int minimumRateToEatBananas(vector<int> &nums, int h)
  {
    // Minimum speed = 1
    // Maximum speed = max pile size
    int low = 1;
    int high = *max_element(nums.begin(), nums.end());

    int ans = high;
    while (low <= high)
    {
      // Avoid overflow
      int mid = low + (high - low) / 2;

      // Calculate hours needed at speed = mid
      long long reqTime = calculateTotalHours(nums, mid);

      // If within allowed hours, try smaller speed
      if (reqTime <= h)
      {
        ans = mid;      // possible answer
        high = mid - 1; // try to minimize k
      }
      else
      {
        // Too slow → increase speed
        low = mid + 1;
      }
    }

    return ans;
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