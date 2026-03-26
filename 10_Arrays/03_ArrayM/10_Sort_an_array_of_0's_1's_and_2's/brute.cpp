#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  void sortZeroOneTwo(vector<int> &nums)
  {

    sort(nums.begin(), nums.end());
  }
};
int main()
{
  vector<int> nums = {2, 0, 1, 1, 0, 2};

  Solution sol;

  sol.sortZeroOneTwo(nums);

  for (int num : nums)
  {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}

// Time Complexity: O(NxlogN) and Space Complexity: O(1) 