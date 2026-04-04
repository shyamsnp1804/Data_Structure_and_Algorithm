/*

| Type        | Condition      |
| ----------- | -------------- |
| Lower Bound | `nums[i] >= x` |
| Upper Bound | `nums[i] > x`  |

*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int upperBound(vector<int> &nums, int x)
  {
    int n = nums.size();
    // Iterate over each element
    for (int i = 0; i < n; i++)
    {
      /* Return the index if the
         element is greater than x */
      if (nums[i] > x)
      {
        return i;
      }
    }
    /* If no element is greater
       than x, return n */
    return n;
  }
};

int main()
{
  vector<int> nums = {3, 5, 8, 9, 15, 19};
  int x = 9;

  Solution solution;

  int ind = solution.upperBound(nums, x);

  cout << "The upper bound is the index: " << ind << "\n";

  return 0;
}

// T.C -> O(N) and S.C -> O(1)