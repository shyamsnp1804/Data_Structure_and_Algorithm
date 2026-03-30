/* Given an array nums of n integers.
Return the length of the longest sequence of consecutive integers. The integers in this sequence can appear in any order. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int longestConsecutive(vector<int> &nums)
  {
    int n = nums.size();

    // Edge case: if array is empty
    if (n == 0)
      return 0;

    // Stores the maximum length of consecutive sequence
    int longest = 1;

    // Unordered set to store all elements (for O(1) lookup)
    unordered_set<int> st;

    // Insert all elements into the set
    for (int i = 0; i < n; i++)
    {
      st.insert(nums[i]);
    }

    // Traverse each unique element in the set
    for (auto it : st)
    {
      // Check if 'it' is the start of a sequence
      // A number is a start only if (it - 1) is NOT present
      if (st.find(it - 1) == st.end())
      {
        int cnt = 1; // current sequence length
        int x = it;  // current number

        // Expand the sequence forward (it+1, it+2, ...)
        while (st.find(x + 1) != st.end())
        {
          x += 1;   // move to next number
          cnt += 1; // increase count
        }

        longest = max(longest, cnt);
      }
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

//  time complexity is O(2xN)  and Space Complexity: O(N)