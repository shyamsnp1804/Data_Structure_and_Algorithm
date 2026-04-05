/* Given a sorted array of nums consisting of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int searchInsert(vector<int> &nums, int target)
  {
    // Iterate through the vector
    for (int i = 0; i < nums.size(); ++i)
    {
      // If current element is greater than  or equal to the target
      if (nums[i] >= target)
      {
        // Return the current index
        return i;
      }
    }
    // If target is greater than all elements,return the size of the vector
    return nums.size();
  }
};

int main()
{
  vector<int> nums = {1, 3, 5, 6};
  int target = 5;

  Solution sol;

  int ind = sol.searchInsert(nums, target);

  cout << "The index is: " << ind << "\n";
  return 0;
}

// T.C-> O(N) and S.C-> O(1)