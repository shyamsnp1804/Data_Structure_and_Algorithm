#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    int n = nums.size();

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        if (nums[i] + nums[j] == target) // if nums[i] + nums[j] is equal to target put i and j in ans
        {
          ans.push_back(i);
          ans.push_back(j);
          return ans;
        }
      }
    }
    return {-1, -1};
  }
};

int main()
{
  int n = 5;
  vector<int> nums = {2, 6, 5, 8, 11};
  int target = 14;

  Solution sol;

  vector<int> ans = sol.twoSum(nums, target);

  cout << "This is the answer: [" << ans[0] << ", " << ans[1] << "]" << endl;

  return 0;
}

// T.C -> O(N^2) and S.C -> O(1) because Output size is constant (2 elements) , No extra data structures used