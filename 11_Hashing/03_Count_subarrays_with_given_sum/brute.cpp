/* Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int numberOftSubarray(vector<int> &nums, int target)
  {
    int n = nums.size();

    int cnt = 0;

    // Outer loop: fixes the starting index of subarray
    for (int i = 0; i < n; i++)
    {
      int sum = 0; // initialize sum for each new starting point

      // Inner loop: expands the subarray from index i to j
      for (int j = i; j < n; j++)
      {
        sum += nums[j]; // keep adding elements to current subarray

        // check if current subarray sum equals k
        if (sum == target)
        {
          cnt++;
        }
      }
    }

    return cnt;
  }
};

int main()
{
  vector<int> a = {-1, 1, 1};
  int k = 1;

  Solution solution;

  int ans = solution.numberOftSubarray(a, k);

  cout << "The number of subarray is: " << ans << "\n";

  return 0;
}

// Complexity:
// Time Complexity  : O(n^2) -> two nested loops
// Space Complexity : O(1)   -> no extra space used