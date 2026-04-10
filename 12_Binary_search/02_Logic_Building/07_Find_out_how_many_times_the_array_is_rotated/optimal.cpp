/* Given an integer array nums of size n, sorted in ascending order with distinct values. The array has been right rotated an unknown number of times, between 0 and n-1 (including). Determine the number of rotations performed on the array. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int findKRotation(vector<int> &arr)
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
    // The number of rotations is equal to the index of the minimum element.
    return low;
  }
};

int main()
{
  vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};

  Solution sol;

  int ans = sol.findKRotation(arr);

  cout << "The array is rotated " << ans << " times.\n";

  return 0;
}