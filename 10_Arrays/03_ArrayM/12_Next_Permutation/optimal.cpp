#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  void nextPermutation(vector<int> &nums)
  {
    int n = nums.size(); // Size of the given array

    // To store the index of the first smaller element from right
    int ind = -1;

    // Find the first index from the end where nums[i] < nums[i+1]
    for (int i = n - 2; i >= 0; i--)
    {
      if (nums[i] < nums[i + 1])
      {
        ind = i;
        break;
      }
    }

    // If no such index exists, array is in descending order So, reverse it to get the smalles permutation
    if (ind == -1)
    {
      reverse(nums.begin(), nums.end());
      return;
    }

    // Find the element just greater than nums[ind] from the end
    for (int i = n - 1; i > ind; i--)
    {
      if (nums[i] > nums[ind])
      {
        swap(nums[i], nums[ind]);
        break;
      }
    }

    // Reverse the right half to get the next smallest permutation
    reverse(nums.begin() + ind + 1, nums.end());
    return;
  }
};

int main()
{
  vector<int> nums = {1, 2, 3};

  Solution sol;

  sol.nextPermutation(nums);

  cout << "\nNext Permutation: ";
  for (int x : nums)
    cout << x << " ";

  return 0;
}
