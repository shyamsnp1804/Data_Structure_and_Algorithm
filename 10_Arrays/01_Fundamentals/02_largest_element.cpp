#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  static int largestElement(std::vector<int> &nums)
  {

    sort(nums.begin(), nums.end());

    int largest = nums[nums.size() - 1];

    return largest;
  }
};

int main()
{
  vector<int> nums = {3, 2, 1, 5, 2};

  Solution sol;

  int largest = sol.largestElement(nums);

  cout << largest << std::endl;

  return 0;
}

/* Time Complexity: O(N * logN), as we are sorting the array, where N is the length of the array.

Space Complexity: O(log(n)) if we use c++ sort() method. */