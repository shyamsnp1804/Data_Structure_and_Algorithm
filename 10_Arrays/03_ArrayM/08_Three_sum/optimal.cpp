#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<vector<int>> threeSum(vector<int> &nums, int target)
  {
    int n = nums.size();

    sort(nums.begin(), nums.end());

    // vector to store triplets that sum up to 0
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++)
    {
      // skip duplicates
      if (i > 0 && nums[i] == nums[i - 1])
        continue;

      // two pointer approach
      int j = i + 1;
      int k = n - 1;

      while (j < k)
      {
        int sum = nums[i] + nums[j] + nums[k];

        if (sum < 0)
        {
          j++;
        }
        else if (sum > 0)
        {
          k--;
        }
        else
        {
          vector<int> temp = {nums[i], nums[j], nums[k]};
          ans.push_back(temp);
          j++;
          k--;
          while (j < k && nums[j] == nums[j - 1])
            j++;
          while (j < k && nums[k] == nums[k + 1])
            k--;
        }
      }
    }
    return ans;
  }
};

int main()
{
  vector<int> nums = {-1, 0, 1, 2, -1, -4};
  int target = 0;

  Solution sol;
  vector<vector<int>> result = sol.threeSum(nums, target);

  cout << "Triplets that sum to " << target << " are:\n";

  for (auto triplet : result)
  {
    cout << "[ ";
    for (int num : triplet)
    {
      cout << num << " ";
    }
    cout << "]\n";
  }

  return 0;
}

// Time Complexity: O(NlogN)+O(N^2) and Space Complexity: O(1)