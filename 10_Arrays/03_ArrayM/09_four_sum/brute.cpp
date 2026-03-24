#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<vector<int>> fourSum(vector<int> &nums, int target)
  {
    int n = nums.size();

    // Set to store unique quadruplets
    set<vector<int>> st;

    for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        for (int k = j + 1; k < n; k++)
        {
          for (int l = k + 1; l < n; l++)
          {
            // Calculate the sum of the current quadruplet
            long long sum = nums[i] + nums[j] + nums[k] + nums[l];

            // Check if the sum matches the target
            if (sum == target)
            {
              vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
              // Sort the quadruplet to ensure uniqueness
              sort(temp.begin(), temp.end());
              st.insert(temp);
            }
          }
        }
      }
    }
    // Convert set to vector (unique quadruplets)
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
  }
};

int main()
{
  vector<int> nums = {-1, 0, 1, 2, -1, -4};
  int target = 0;

  Solution sol;
  vector<vector<int>> result = sol.fourSum(nums, target);

  cout << "Triplets that sum to " << target << " are:\n";

  for (auto quadruplets : result)
  {
    cout << "[ ";
    for (int num : quadruplets)
    {
      cout << num << " ";
    }
    cout << "]\n";
  }

  return 0;
}

// Time Complexity: O(N^4) and pace Complexity: O(2 x no. of the unique quadruplets)