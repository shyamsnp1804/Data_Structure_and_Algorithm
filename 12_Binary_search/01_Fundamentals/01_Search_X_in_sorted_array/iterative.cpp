#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int search(vector<int> &nums, int target)
  {
    int n = nums.size();

    int low = 0, high = n - 1;

    while (low <= high)
    {

      int mid = low + (high - low) / 2;

      if (nums[mid] == target)
      {
        return mid;
      }
      else if (target > nums[mid])
      {
        low = mid + 1;
      }
      else
      {
        high = mid - 1;
      }
    }
    return -1;
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

/* Time Complexity: O(log(N)) (where N is the size of the given array)
In each step, the search space is divided into two halves. In the worst case, this process will continue until the search space can no longer be divided and the number of divisions required to reduce the array size to one is log(N), making the overall time complexity O(log(N)).

Space Complexity: O(1)
Using only a couple of variables. */