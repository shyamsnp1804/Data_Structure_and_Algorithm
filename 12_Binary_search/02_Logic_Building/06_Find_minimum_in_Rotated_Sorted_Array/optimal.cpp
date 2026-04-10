/* Given an integer array nums of size N, sorted in ascending order with distinct values, and then rotated an unknown number of times (between 1 and N), find the minimum element in the array. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int findMin(vector<int> &arr)
  {
    int n = arr.size();

    // Initialize two pointers for binary search
    int low = 0, high = n - 1;

    // Continue until the search space is reduced to one element
    while (low < high)
    {
      // Calculate mid index (avoids overflow)
      int mid = low + (high - low) / 2;

      // If mid element is greater than the last element,
      // the minimum must be in the right half
      if (arr[mid] > arr[high])
      {
        // Discard left half including mid
        low = mid + 1;
      }
      else
      {
        // Otherwise, the minimum is in the left half (including mid)
        // So we keep mid and discard the right half
        high = mid;
      }
    }

    // At the end of the loop, low == high
    // This index points to the minimum element
    return arr[low];
  }
};

int main()
{
  vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};

  Solution sol;

  int ans = sol.findMin(arr);

  cout << "The minimum element is: " << ans << "\n";

  return 0;
}