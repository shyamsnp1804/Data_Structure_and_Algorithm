#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  void moveZeros(vector<int> &nums)
  {
    int n = nums.size(); // size of array

    int j = 0;  // j → position to place next non-zero

    for (int i = 0; i < n; i++)
    {
      if (nums[i] != 0)
      {
        swap(nums[i], nums[j]);
        j++;
      }
    }
  }
};

int main()
{
  vector<int> nums = {{1, 0, 2, 3, 2, 0, 0, 4, 5, 1}};

  Solution sol;
  sol.moveZeros(nums);

  cout << "Array after moving zeroes: ";
  for (int i = 0; i < nums.size(); i++)
  {
    cout << nums[i] << " ";
  }

  return 0;
}

// Time Complexity: O(N) and Space Complexity: O(1)