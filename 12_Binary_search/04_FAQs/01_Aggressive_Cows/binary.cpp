#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
  bool canWePlace(vector<int> &nums, int dist, int cows)
  {
    int n = nums.size();
    // Number of cows placed
    int cntCows = 1;

    // Position of last placed cow
    int last = nums[0];

    for (int i = 1; i < n; i++)
    {
      if (nums[i] - last >= dist)
      {
        // Place next cow
        cntCows++;

        // Update the last location
        last = nums[i];
      }
      if (cntCows >= cows)
        return true;
    }
    return false;
  }

public:
  int aggressiveCows(vector<int> &nums, int k)
  {
    int n = nums.size();

    sort(nums.begin(), nums.end());

    int low = 1, high = nums[n - 1] - nums[0];

    int ans = 0;

    while (low <= high)
    {
      int mid = low + (high - low) / 2;

      if (canWePlace(nums, mid, k) == true)
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
  vector<int> nums = {0, 3, 4, 7, 10, 9};
  int k = 4;

  Solution sol;

  int ans = sol.aggressiveCows(nums, k);

  cout << "The maximum possible minimum distance is: " << ans << "\n";

  return 0;
}

// T.C -> O(n log n + n log(max distance)) and S.C -> O(1)