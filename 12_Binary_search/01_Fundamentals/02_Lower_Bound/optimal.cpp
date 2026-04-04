/* Given a sorted array of nums and an integer x, write a program to find the lower bound of x.

The lower bound algorithm finds the first and smallest index in a sorted array where the value at that index is greater than or equal to a given key i.e. x.

If no such index is found, return the size of the array. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int lowerBound(vector<int> &nums, int target)
  {
    int n = nums.size();

    int low = 0, high = n - 1;

    int ans = n;

    while (low <= high)
    {
      int mid = low + (high - low) / 2;

      if (nums[mid] >= target)
      {
        ans = mid;      // maybe an answer
        high = mid - 1; // look for more small index on left
      }
      else
      {
        low = mid + 1; // look on right
      }
    }
    return ans;
  }
};

int main()
{
  vector<int> arr = {1, 2, 2, 3};
  int x = 2;

  Solution sol;

  int ind = sol.lowerBound(arr, x);

  cout << "The lower bound is the index: " << ind << "\n";

  return 0;
}

// T.C -> O(log n) and S.C -> O(1)