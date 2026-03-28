/*
Given an integer array nums of size n.
Return all elements which appear more than n/3 times in the array.
At most 2 such elements can exist.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> majorityElementTwo(vector<int> &nums)
  {
    int n = nums.size();

    // Step 1: Initialize two candidates and their counts
    int cnt1 = 0, cnt2 = 0;

    // Candidates (initially set to dummy values)
    int el1 = INT_MIN, el2 = INT_MIN;

    // -----------------------------------------
    // Step 2: Boyer-Moore Voting (Finding candidates)
    // -----------------------------------------
    for (int i = 0; i < n; i++)
    {
      // If cnt1 is 0, assign new candidate to el1
      // Make sure it's not equal to el2
      if (cnt1 == 0 && nums[i] != el2)
      {
        cnt1 = 1;
        el1 = nums[i];
      }

      // If cnt2 is 0, assign new candidate to el2
      // Make sure it's not equal to el1
      else if (cnt2 == 0 && nums[i] != el1)
      {
        cnt2 = 1;
        el2 = nums[i];
      }

      // If current element matches el1, increase cnt1
      else if (nums[i] == el1)
      {
        cnt1++;
      }

      // If current element matches el2, increase cnt2
      else if (nums[i] == el2)
      {
        cnt2++;
      }

      // If current element matches neither, decrease both counts
      else
      {
        cnt1--;
        cnt2--;
      }
    }

    // -----------------------------------------
    // Step 3: Verify the candidates
    // -----------------------------------------

    // Reset counts to count actual occurrences
    cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < n; i++)
    {
      if (nums[i] == el1)
      {
        cnt1++;
      }
      if (nums[i] == el2)
      {
        cnt2++;
      }
    }

    // Minimum frequency required (> n/3)
    int mini = n / 3 + 1;

    vector<int> result;

    // Check if el1 is valid majority element
    if (cnt1 >= mini)
    {
      result.push_back(el1);
    }

    // Check if el2 is valid and different from el1
    if (cnt2 >= mini && el1 != el2)
    {
      result.push_back(el2);
    }

    return result;
  }
};

int main()
{
  vector<int> arr = {11, 33, 33, 11, 33, 11};

  Solution sol;

  vector<int> ans = sol.majorityElementTwo(arr);

  cout << "The majority elements are: ";
  for (auto it : ans)
  {
    cout << it << " ";
  }
  cout << "\n";

  return 0;
}

/*
------------------ COMPLEXITY ------------------

Time Complexity:
O(N)  -> for finding candidates
+ O(N) -> for verifying counts
= O(2N) ≈ O(N)

Space Complexity:
O(1) -> only a few variables used (no extra data structures)

------------------------------------------------
*/