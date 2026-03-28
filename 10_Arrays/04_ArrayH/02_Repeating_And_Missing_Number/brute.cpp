/* Given an integer array nums of size n containing values from [1, n] and each value appears exactly once in the array, except for A, which appears twice and B which is missing.
Return the values A and B, as an array of size 2, where A appears in the 0-th index and B in the 1st index.
Note: You are not allowed to modify the original array. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> findMissingRepeatingNumbers(vector<int> &nums)
  {
    int n = nums.size();

    int repeating = -1, missing = -1;

    for (int i = 1; i <= n; i++) // loop is starting from 1 because values are from [1, n]
    {
      int cnt = 0;

      for (int j = 0; j < n; j++)
      {
        if (nums[j] == i)
          cnt++;
      }

      if (cnt == 2)
      {
        repeating = i;
      }

      else if (cnt == 0)
      {
        missing = i;
      }

      // If both repeating and missing are found, break out of loop
      if (repeating != -1 && missing != -1)
      {
        break;
      }
    }
    return {repeating, missing};
  }
};

int main()
{
  vector<int> nums = {3, 1, 2, 5, 4, 6, 7, 5};

  Solution sol;

  vector<int> result = sol.findMissingRepeatingNumbers(nums);

  cout << "The repeating and missing numbers are: {" << result[0] << ", " << result[1] << "}\n";

  return 0;
}

// Time Complexity: O(N2) and Space Complexity: O(1)