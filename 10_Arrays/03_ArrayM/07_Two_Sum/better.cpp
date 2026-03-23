#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    int n = nums.size();

    // HashMap to store (element,index) pair
    unordered_map<int, int> mpp;

    // iterate main array
    for (int i = 0; i < n; i++)
    {
      // current number in the array
      int num = nums[i];

      // more needed to meet the target
      int moreNeeded = target - num;

      // checking for moreNeeded element in array
      if (mpp.find(moreNeeded) != mpp.end())
      {
        // Return the indices of the two numbers that sum up to target
        return {mpp[moreNeeded], i};
      }
      // else store current element and its index for future
      mpp[num] = i;
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

// T.C -> O(N) and S.C -> O(N)