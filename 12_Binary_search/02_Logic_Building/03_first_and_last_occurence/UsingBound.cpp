/* Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value. If the target is not found in the array, return [-1, -1]. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
  int lowerBound(vector<int> &nums, int target)
  {
    int low = 0, high = nums.size() - 1;
    int ans = nums.size();

    // Applying binary search algorithm
    while (low <= high)
    {
      int mid = (low + high) / 2;

      /* If the middle element is greater than or equal to the target element update the answer as mid and eliminate the right half  */
      if (nums[mid] >= target)
      {
        ans = mid;
        high = mid - 1;
      }

      // If the middle element is smaller than the target element then we eliminate the left half
      else
      {
        low = mid + 1;
      }
    }
    return ans;
  }

  // Function to find the upper bound of the target
  int upperBound(vector<int> &nums, int target)
  {
    int low = 0, high = nums.size() - 1;
    int ans = nums.size();

    // Applying binary search algorithm
    while (low <= high)
    {
      int mid = (low + high) / 2;

      /*  If the middle element is greater than the target element update the answer as mid and eliminate the right half  */
      if (nums[mid] > target)
      {
        ans = mid;
        high = mid - 1;
      }
      // If the middle element is greater than or equal to the target element eliminate the right half
      else
      {
        low = mid + 1;
      }
    }
    return ans;
  }

public:
  // Function to find the first and last occurrences of the target
  vector<int> searchRange(vector<int> &nums, int target)
  {

    // Function call to find the first occurrence (lower bound)
    int firstOcc = lowerBound(nums, target);

    // Check if the target is present in the array or not
    if (firstOcc == nums.size() || nums[firstOcc] != target)
      return {-1, -1};

    // Function call to find the last occurrence (upper bound)
    int lastOcc = upperBound(nums, target) - 1;

    return {firstOcc, lastOcc};
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
// Time Complexity: 2*O(log N) and Space Complexity: O(1)