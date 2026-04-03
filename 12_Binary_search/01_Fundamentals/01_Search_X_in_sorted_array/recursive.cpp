#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int search(vector<int> &nums, int target)
  {
    int n = nums.size();

    return func(nums, 0, n - 1, target);
  }

private:
  int func(vector<int> &nums, int low, int high, int target)
  {
    if (low > high)
      return -1;

    int ind;
    int mid = low + (high - low) / 2;

    if (nums[mid] == target)
    {
      ind = mid;
    }
    else if (nums[mid] > target)
    {
      ind = func(nums, low, mid - 1, target);
    }
    else
    {
      ind = func(nums, mid + 1, high, target);
    }
    return ind;
  }
};

int main()
{
  vector<int> a = {-1, 0, 3, 5, 9, 12};
  int target = 9;

  Solution sol;

  int ind = sol.search(a, target);

  if (ind == -1)
    cout << "The target is not present." << endl;
  else
    cout << "The target is at index: " << ind << endl;

  return 0;
}

/* Time Complexity: O(logN), where N is the size of the array
In each step, the search space is divided into two halves. In the worst case, this process will continue until the search space can no longer be divided and the number of divisions required to reduce the array size to one is log(N), making the overall time complexity O(logN).

Space Complexity: O(logN), due to the recursion stack space. */