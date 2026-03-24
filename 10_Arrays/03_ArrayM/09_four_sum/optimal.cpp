#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<vector<int>> fourSum(vector<int> &nums, int target)
  {
    int n = nums.size();

    // Step 1: Sort the array (important for two-pointer + duplicates handling)
    sort(nums.begin(), nums.end());

    // To store final unique quadruplets
    vector<vector<int>> ans;

    // Step 2: Fix the first element (i)
    for (int i = 0; i < n; i++)
    {
      // Skip duplicate values for i
      if (i > 0 && nums[i] == nums[i - 1])
        continue;

      // Step 3: Fix the second element (j)
      for (int j = i + 1; j < n; j++)
      {
        // Skip duplicate values for j
        if (j > i + 1 && nums[j] == nums[j - 1])
          continue;

        // Step 4: Two-pointer approach for remaining two elements
        int k = j + 1; // third element
        int l = n - 1; // fourth element

        // Process all pairs between k and l
        while (k < l)
        {
          // Use long long to avoid integer overflow
          long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];

          // Case 1: Sum is smaller → increase k
          if (sum < target)
          {
            k++;
          }
          // Case 2: Sum is larger → decrease l
          else if (sum > target)
          {
            l--;
          }
          // Case 3: Found valid quadruplet
          else
          {
            ans.push_back({nums[i], nums[j], nums[k], nums[l]});

            // Move both pointers
            k++;
            l--;

            // Skip duplicates for k
            while (k < l && nums[k] == nums[k - 1])
              k++;

            // Skip duplicates for l
            while (k < l && nums[l] == nums[l + 1])
              l--;
          }
        }
      }
    }

    // Return all unique quadruplets
    return ans;
  }
};

int main()
{
  vector<int> nums = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
  int target = 9;

  Solution sol;

  vector<vector<int>> result = sol.fourSum(nums, target);

  cout << "Quadruplets that sum to " << target << " are:\n";

  for (auto quad : result)
  {
    cout << "[ ";
    for (int num : quad)
    {
      cout << num << " ";
    }
    cout << "]\n";
  }

  return 0;
}

// Time Complexity : O(n³) and Space Complexity : O(1) (excluding output)