/* Given an array nums of size n and an integer k, find the length of the longest sub-array that sums to k. If no such sub-array exists, return 0.

Example

Input: nums = [10, 5, 2, 7, 1, 9],  k=15

Output: 4

Explanation:

The longest sub-array with a sum equal to 15 is [5, 2, 7, 1], which has a length of 4. This sub-array starts at index 1 and ends at index 4, and the sum of its elements (5 + 2 + 7 + 1) equals 15. Therefore, the length of this sub-array is 4. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int longestSubarray(vector<int> &nums, int k)
  {
    int n = nums.size();

    map<int, int> preSumMap; // stores prefix sum as key and its first occurrence index as value

    int sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++)
    {
      // calculate the prefix sum till index i
      sum += nums[i];

      // if the sum equals k, update maxLen
      if (sum == k)
      {
        maxLen = max(maxLen, i + 1);
      }

      // calculate the sum of remaining part i.e., sum - k
      int rem = sum - k;

      // calculate the length and update maxLen
      if (preSumMap.find(rem) != preSumMap.end())
      {
        int len = i - preSumMap[rem]; // preSumMap[rem] is index where prefix sum=(sum - k) was previously seen
        maxLen = max(maxLen, len);
      }

      // update the map if sum is not already present
      if (preSumMap.find(sum) == preSumMap.end())
      {
        preSumMap[sum] = i;
      }
    }

    return maxLen;
  }
};

int main()
{
  vector<int> a = {-1, 1, 1};
  int k = 1;

  Solution solution;

  int len = solution.longestSubarray(a, k);

  cout << "The length of the longest subarray is: " << len << "\n";
  return 0;
}

// T.C-> O(n log n) and S.C-> O(n)