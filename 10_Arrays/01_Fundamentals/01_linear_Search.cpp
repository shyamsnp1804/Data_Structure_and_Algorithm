#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int linearSearch(vector<int> &nums, int target)
  {

    for (int i = 0; i < nums.size(); i++)
    {

      if (nums[i] == target)
      {
        // Return index
        return i;
      }
    }
    // If target not found
    return -1;
  }
};

int main()
{
  vector<int> nums = {1, 2, 3, 4, 5};
  int target = 4;

  Solution sol;

  int result = sol.linearSearch(nums, target);

  cout << result << endl;

  return 0;
}
