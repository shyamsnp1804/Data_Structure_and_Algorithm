#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> leaders(vector<int> &nums)
  {
    int n = nums.size();
    vector<int> ans;
    int maxi = INT_MIN;

    for (int i = n - 1; i >= 0; i--)
    {
      if (nums[i] > maxi)
      {
        ans.push_back(nums[i]);
        maxi = nums[i];
      }
    }
    reverse(ans.begin(), ans.end());
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

// Time Complexity: O(N) and Space Complexity: O(N)