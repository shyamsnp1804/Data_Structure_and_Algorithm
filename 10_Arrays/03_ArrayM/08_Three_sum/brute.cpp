#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<vector<int>> threeSum(vector<int> &nums, int target)
  {
    int n = nums.size();
    set<vector<int>> st; // to store unique triplets

    for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        for (int k = j + 1; k < n; k++)
        {

          if (nums[i] + nums[j] + nums[k] == target)
          {

            vector<int> temp = {nums[i], nums[j], nums[k]};
            sort(temp.begin(), temp.end()); // remove duplicate
            st.insert(temp);
          }
        }
      }
    }

    // convert set to vector
    vector<vector<int>> ans(st.begin(), st.end());
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

// Time Complexity: O(N3) and pace Complexity: O(2 x no. of the unique triplets)