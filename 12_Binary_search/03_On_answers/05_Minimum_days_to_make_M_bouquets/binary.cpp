/* Given n roses and an array nums where nums[i] denotes that the 'ith' rose will bloom on the nums[i]th day, only adjacent bloomed roses can be picked to make a bouquet. Exactly k adjacent bloomed roses are required to make a single bouquet. Find the minimum number of days required to make at least m bouquets, each containing k roses. Return -1 if it is not possible. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool canMake(vector<int> &nums, int day, int m, int k)
  {
    int count = 0, bouquets = 0;

    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] <= day)
      {
        count++;        // consecutive flower count
        if (count == k) // found k adjacent flowers
        {
          bouquets++;
          count = 0; // reset for next bouquet
        }
      }
      else
      {
        count = 0;
      }
    }

    return bouquets >= m;
  }

  int minDays(vector<int> &nums, int m, int k)
  {
    int n = nums.size();

    if ((long long)m * k > n) // not enough flowers
      return -1;

    int low = *min_element(nums.begin(), nums.end());
    int high = *max_element(nums.begin(), nums.end());

    int ans = -1;

    while (low <= high)
    {
      int mid = low + (high - low) / 2;

      if (canMake(nums, mid, m, k))
      {
        ans = mid;
        high = mid - 1; // try smaller day
      }
      else
      {
        low = mid + 1; // not possible, increase day
      }
    }

    return ans;
  }
};

int main()
{
  vector<int> arr = {7, 7, 7, 7, 13, 11, 12, 7};

  // Number of flowers per bouquet
  int k = 3;

  // Number of bouquets needed
  int m = 2;

  Solution sol;

  int ans = sol.minDays(arr, k, m);

  if (ans == -1)
  {
    cout << "We cannot make m bouquets.\n";
  }
  else
  {
    cout << "We can make bouquets on day " << ans << "\n";
  }

  return 0;
}

// TC = O(n * log(max(nums) - min(nums))) and SC = O(1)   // constant space