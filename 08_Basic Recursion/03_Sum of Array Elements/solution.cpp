#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int sumOfArray(vector<int> &nums)
  {
    // Start from index 0
    return sum(nums, 0);
  }

private:
  int sum(vector<int> &nums, int left)
  {
    // Base case: out of bounds
    if (left >= nums.size())
    {
      return 0;
    }
    // Add current element and recurse
    return nums[left] + sum(nums, left + 1);
  }
};

int main()
{
  vector<int> nums = {1, 2, 3};
  Solution sol;
  int result = sol.sumOfArray(nums);
  cout << "sum of Array elements : " << result;
  return 0;
}