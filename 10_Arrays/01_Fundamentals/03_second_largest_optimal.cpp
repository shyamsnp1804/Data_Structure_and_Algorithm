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

    for (int i = 0; i < n; i++)
    {
      if (nums[i] > largest)
      {
        secondLargest = largest;
        largest = nums[i];
      }
      else if (nums[i] > secondLargest && nums[i] != largest)
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

// Time Complexity: O(N)
// Space Complexity: O(1)