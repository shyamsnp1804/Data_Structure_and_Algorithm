#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  void moveZeros(vector<int> &nums)
  {
    int n = nums.size(); // size of array

    vector<int> temp; // temp array

    // Copy non-zero elements to temp
    for (int i = 0; i < n; i++)
    {
      if (nums[i] != 0)
      {
        temp.push_back(nums[i]);
      }
    }

    // Copy non-zero elements back to nums
    for (int i = 0; i < temp.size(); i++)
    {
      nums[i] = temp[i];
    }

    // Fill the rest with zeroes
    for (int i = temp.size(); i < n; i++)
    {
      nums[i] = 0;
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

// Time Complexity: O(N) and Space Complexity: O(N)