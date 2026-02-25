#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> reverseArray(vector<int> &nums)
  {
    // Call the helper function to reverse the array
    reverse(nums, 0, nums.size() - 1);
    // Return the reversed array
    return nums;
  }

  // Helper function
private:
  void reverse(vector<int> &nums, int left, int right)
  {
    if (left >= right)
    {
      return;
    }
    // Swap the elements
    int temp = nums[left];
    nums[left] = nums[right];
    nums[right] = temp;
    // Recursive call
    reverse(nums, left + 1, right - 1);
  }
};

int main()
{
  Solution solution;
  vector<int> nums = {1, 2, 3, 4, 5};
  vector<int> result = solution.reverseArray(nums);
  for (int num : result)
  {
    cout << num << " ";
  }
  return 0;
}
