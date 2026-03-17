#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int missingNumber(vector<int> &nums)
  {

    int N = nums.size();

    // Outer loop that runs from 0 to N
    for (int i = 0; i <= N; i++)
    {
      /* Flag variable to check
      if an element exists*/
      int flag = 0;

      // Search for the element using linear search
      for (int j = 0; j < N; j++)
      {
        if (nums[j] == i)
        {
          // i is present in the array
          flag = 1;
          break;
        }
      }

      // Check if the element is missing (flag == 0)
      if (flag == 0)
        return i;
    }
    /*  The following line will never
execute,it is just to avoid warnings*/
    return -1;
  }
};

int main()
{
  vector<int> nums = {1, 3, 6, 4, 2, 5};

  Solution solution;

  int ans = solution.missingNumber(nums);

  cout << "The missing number is: " << ans << endl;

  return 0;
}

// Time Complexity: O(N^2) and Space Complexity: O(1)