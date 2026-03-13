#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  void rotateArrayByOne(vector<int> &nums)
  {
    int temp = nums[0];
    for (int i = 1; i < nums.size(); i++) // Time Complexity: O(N) and Space Complexity: O(1)
    {
      nums[i - 1] = nums[i];
    }
    nums[nums.size() - 1] = temp;
  }
};

int main()
{
  vector<int> nums = {1, 2, 3, 4, 5, 6};
  Solution sol;
  sol.rotateArrayByOne(nums);
  for (auto it : nums)
  {
    cout << it << " ";
  }
  return 0;
}