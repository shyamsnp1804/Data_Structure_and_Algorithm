/* Given an integer array nums, sorted in ascending order (may contain duplicate values) and a target value k. Now the array is rotated at some pivot point unknown to you. Return True if k is present and otherwise, return False */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool search(vector<int> &nums, int target)
  {
    int low = 0, high = nums.size() - 1;

    // Applying binary search algorithm
    while (low <= high)
    {
      int mid = low + (high - low) / 2;

      // Check if mid points to the target
      if (nums[mid] == target)
        return true;

      // Handle duplicates: if arr[low], arr[mid], and arr[high] are equal
      if (nums[low] == nums[mid] && nums[mid] == nums[high])
      {
        low = low + 1;
        high = high - 1;
        continue;
      }

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
    return false;
  }
};

int main()
{
  vector<int> nums = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
  int target = 3;

  Solution sol;

  bool result = sol.search(nums, target);

  if (!result)
    cout << "Target is not present.\n";
  else
    cout << "Target is present in the array.\n";

  return 0;
}

// Time Complexity: O(logN) and Space Complexity: O(1)