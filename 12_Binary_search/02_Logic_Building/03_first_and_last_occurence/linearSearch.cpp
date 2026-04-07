/* Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value. If the target is not found in the array, return [-1, -1]. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> searchRange(vector<int> &nums, int target)
  {
    int n = nums.size();

    int first = -1, last = -1;

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
      if (nums[i] == target)
      {
        if (first == -1)
          first = i;
        last = i;
      }
    }
    ans.push_back(first);
    ans.push_back(last);
    return ans;
  }
};

int main()
{
  vector<int> nums = {5, 7, 7, 8, 8, 10};

  int target = 8;

  Solution sol;

  vector<int> result = sol.searchRange(nums, target);

  cout << "The first and last occurrences are at indices: "
       << result[0] << " and " << result[1] << "\n";

  return 0;
}

// Time Complexity: O(N) and Space Complexity: O(1)