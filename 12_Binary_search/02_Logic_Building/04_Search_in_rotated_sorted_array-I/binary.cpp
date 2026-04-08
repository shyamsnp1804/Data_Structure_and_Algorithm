/* Given an integer array nums, sorted in ascending order (with distinct values) and a target value k. The array is rotated at some pivot point that is unknown. Find the index at which k is present and if k is not present return -1. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int search(vector<int> &nums, int target)
  {
    int low = 0, high = nums.size() - 1;

    // Applying binary search algorithm
    while (low <= high)
    {
      int mid = low + (high - low) / 2;

      // Check if mid points to the target
      if (nums[mid] == target)
        return mid;

      // Check if the left part is sorted
      if (nums[low] <= nums[mid])
      {
        // check if Target exists in the left sorted part
        if (nums[low] <= target && target <= nums[mid])
        {
          high = mid - 1;
        }
        else
        {
          // Target does not exist in the left sorted part
          low = mid + 1;
        }
      }
      else // Check if the right part is sorted
      {
        // check if Target exists in the right sorted part
        if (nums[mid] <= target && target <= nums[high])
        {
          low = mid + 1;
        }
        else
        {
          // Target does not exist in the right sorted part
          high = mid - 1;
        }
      }
    }
    // target not found
    return -1;
  }
};

int main()
{
  vector<int> nums = {7, 8, 9, 1, 2, 3, 4, 5, 6};
  int target = 1;

  Solution sol;

  int result = sol.search(nums, target);

  if (result == -1)
    cout << "Target is not present.\n";
  else
    cout << "The index is: " << result << "\n";

  return 0;
}

// Time Complexity: O(logN) and Space Complexity: O(1)