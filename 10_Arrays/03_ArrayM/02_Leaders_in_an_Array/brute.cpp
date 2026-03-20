#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> leaders(vector<int> &nums)
  {
    vector<int> ans;

    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
      bool leader = true;
      for (int j = i + 1; j < n; j++)
      {
        if (nums[j] > nums[i])
        {
          leader = false;
          break;
        }
      }
      if (leader)
      {
        ans.push_back(nums[i]);
      }
    }
    return ans;
  }
};

int main()
{
  vector<int> nums = {1, 2, 5, 3, 1, 2};

  Solution sol;

  vector<int> ans = sol.leaders(nums);

  cout << "Leaders in the array are: ";
  for (auto it : ans)
  {
    cout << it << " ";
  }
  return 0;
}

// Time Complexity: O(N^2) and Space Complexity: O(N)