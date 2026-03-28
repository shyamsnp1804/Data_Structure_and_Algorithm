#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  long long int numberOfInversions(vector<int> &nums)
  {

    int n = nums.size();

    // Count the number of pairs:
    long long int cnt = 0;

    for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        // if nums[i] is greater than nums[j], increase countby 1
        if (nums[i] > nums[j])
          cnt++;
      }
    }
    // return the count of inversions
    return cnt;
  }
};

int main()
{
  vector<int> nums = {5, 4, 3, 2, 1};

  Solution sol;

  long long int result = sol.numberOfInversions(nums);

  cout << "The number of inversions is: "
       << result << endl;

  return 0;
}

// Time Complexity: O(N2) and Space Complexity: O(1)