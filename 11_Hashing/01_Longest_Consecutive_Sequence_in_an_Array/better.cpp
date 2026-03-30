#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int longestConsecutive(vector<int> &nums)
  {
    int n = nums.size();

    // Edge case: if array is empty, no sequence exists
    if (n == 0)
      return 0;

    // Stores the maximum length of consecutive sequence found
    int longest = 1;

    // Counts the current consecutive sequence length
    int cnt = 0;

    // Tracks the previous (last smaller) element in sequence
    int lastSmaller = INT_MIN;

    // Step 1: Sort the array so consecutive elements come together
    sort(nums.begin(), nums.end());

    // Step 2: Traverse the sorted array
    for (int i = 0; i < n; i++)
    {
      // Case 1: Current element is consecutive to previous
      // Example: 2 comes after 1 → continue sequence
      if (nums[i] - 1 == lastSmaller)
      {
        cnt += 1;              // extend current sequence
        lastSmaller = nums[i]; // update last element
      }

      // Case 2: Not consecutive AND not duplicate
      // Example: jump from 4 → 100 → start new sequence
      else if (nums[i] != lastSmaller)
      {
        cnt = 1;               // reset sequence length
        lastSmaller = nums[i]; // start new sequence from current element
      }

      // Note:
      // If nums[i] == lastSmaller → duplicate case
      // We skip it (do nothing) to avoid breaking sequence incorrectly

      longest = max(longest, cnt);
    }

    return longest;
  }
};

int main()
{
  vector<int> a = {100, 4, 200, 1, 3, 2};

  Solution solution;

  int ans = solution.longestConsecutive(a);

  cout << "The longest consecutive sequence is " << ans << "\n";

  return 0;
}