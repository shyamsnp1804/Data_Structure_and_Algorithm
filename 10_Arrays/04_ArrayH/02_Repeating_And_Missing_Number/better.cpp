/*
Given an integer array nums of size n containing values from [1, n].

- One number (A) appears twice → repeating number
- One number (B) is missing

Return {A, B}

Note: Original array should NOT be modified.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> findMissingRepeatingNumbers(vector<int> &nums)
  {
    int n = nums.size();

    int repeating = -1, missing = -1;

    // Create a hash array of size n+1 (1-based indexing)
    // hash[i] will store frequency of number i
    int hash[n + 1] = {0};

    // Step 1: Count frequency of each element
    for (int i = 0; i < n; i++)
    {
      hash[nums[i]]++;
    }

    // Step 2: Identify repeating and missing numbers
    for (int i = 1; i <= n; i++)
    {
      if (hash[i] == 2)
      {
        repeating = i; // number appearing twice
      }
      else if (hash[i] == 0)
      {
        missing = i;
      }
      //  stop early if both found
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

  cout << "The repeating and missing numbers are: {"
       << result[0] << ", " << result[1] << "}\n";

  return 0;
}

// Time Complexity: O(2*N) and Space Complexity: O(N)