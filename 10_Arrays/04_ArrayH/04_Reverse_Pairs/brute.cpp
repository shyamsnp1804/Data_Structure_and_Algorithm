#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  long long int CountreversePairs(vector<int> &nums)
  {

    int n = nums.size();

    // Count the number of pairs:
    long long int cnt = 0;

    for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        // if nums[i] is greater than 2*nums[j], increase countby 1
        if (nums[i] > 2 * nums[j])
          cnt++;
      }
    }
    // return the reverse count
    return cnt;
  }
};

int main()
{
  vector<int> nums = {40, 25, 19, 12, 9, 6, 2};

  Solution sol;

  long long int result = sol.CountreversePairs(nums);

  cout << "The number of reverse Pair is: "
       << result << endl;

  return 0;
}

// Time Complexity: O(N^2) and Space Complexity: O(1)