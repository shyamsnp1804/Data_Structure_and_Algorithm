#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int longestSubarray(vector<int> &nums, int target)
  {
    int n = nums.size(); // size of the array

    int longest = 0; // stores the maximum length of subarray with sum = k

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
          // update the longest length if current subarray is larger
          longest = max(longest, j - i + 1);
        }
      }
    }

    return longest;
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

// Complexity:
// Time Complexity  : O(n^2) -> two nested loops
// Space Complexity : O(1)   -> no extra space used