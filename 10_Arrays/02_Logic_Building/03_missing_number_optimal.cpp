#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int missingNumber(vector<int> &nums)
  {

    int N = nums.size();

    // Summation of first N natural numbers
    int sum1 = (N * (N + 1)) / 2;

    // Summation of all elements in nums
    int sum2 = 0;
    for (int num : nums)
    {
      sum2 += num;
    }

    int missingNum = sum1 - sum2;

    return missingNum;
  }
};

int main()
{
  vector<int> nums = {0, 1, 2, 4};

  Solution solution;

  int ans = solution.missingNumber(nums);

  cout << "The missing number is: " << ans << endl;

  return 0;
}

// Time Complexity: O(N) and Space Complexity: O(1)