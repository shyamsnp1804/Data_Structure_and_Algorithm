#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int secondLargestElement(vector<int> &nums)
  {
    int n = nums.size();
    if (n < 2)
    {
      return -1;
    }
    int largest = INT_MIN, secondLargest = INT_MIN;

    // find largest element
    for (int i = 0; i < n; i++)
    {
      largest = max(largest, nums[i]);
    }
    // find second largest element
    for (int i = 0; i < n; i++)
    {
      if (nums[i] > secondLargest && nums[i] != largest)
      {
        secondLargest = nums[i];
      }
    }
    return secondLargest == INT_MIN ? -1 : secondLargest;
  }
};

int main()
{
  vector<int> nums = {1, 2, 4, 6, 7, 5};
  Solution sol;
  int ans = sol.secondLargestElement(nums);
  cout << "The second largest element is: " << ans << endl;
  return 0;
}

// Time Complexity: O(2N)
// Space Complexity: O(1)