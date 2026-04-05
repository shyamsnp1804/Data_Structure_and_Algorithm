/* Given a sorted array of nums consisting of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order. */

/* Intuition:-  In this specific problem, if the target itself is found, return its index. Otherwise, return the smallest index where the element is greater than the target. Upon observation, it becomes clear that the lower bound of the target serves this purpose. Therefore, for this problem, simply find the lower bound of the target. If no such element is found, return the size of the array. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int searchInsert(vector<int> &nums, int target)
  {
    int n = nums.size();
    int low = 0, high = n - 1;
    int ans = n;

    // Applying Binary Search Algorithm
    while (low <= high)
    {
      int mid = (low + high) / 2;

      // If mid element is greater than or equal to target, update ans  and search the left half
      if (nums[mid] >= target)
      {
        ans = mid;
        high = mid - 1;
      }
      // Otherwise, search the right half
      else
      {
        low = mid + 1;
      }
    }
    return ans;
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

// T.C-> O(logN) and S.C-> O(1)