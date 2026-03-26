#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int maxSubArray(vector<int> &nums)
  {
    // max sum
    long long maxi = LLONG_MIN;

    // current sum
    long long sum = 0;

    // iterate through the array
    for (int i = 0; i < nums.size(); i++)
    {
      // add current element to the sum
      sum += nums[i];

      // update maxi if current sum is greater
      if (sum > maxi)
      {
        maxi = sum;
      }
      // reset sum to 0 if it becomes negative
      if (sum < 0)
      {
        sum = 0;
      }
    }
    return maxi;
  }
};

int main()
{
  vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

  Solution sol;

  int ans = sol.maxSubArray(nums);

  cout << "The maximum subarray sum is: " << ans << endl;
  return 0;
}

//  Time Complexity: O(N²) and Space Complexity: O(1)