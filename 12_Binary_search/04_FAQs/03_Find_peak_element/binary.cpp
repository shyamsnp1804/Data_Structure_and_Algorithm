/* Given an array arr of integers. A peak element is defined as an element greater than both of its neighbors.

Formally, if arr[i] is the peak element, arr[i - 1] < arr[i] and arr[i + 1] < arr[i].

Find the index(0-based) of a peak element in the array. If there are multiple peak numbers, return the index of any peak number.

Note:
As there can be many peak values, "true" is given as output if the returned index is a peak number, otherwise the returned value of index. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int findPeakElement(vector<int> &arr)
  {

    int n = arr.size();

    // Edge cases:
    if (n == 1)
      return 0; // Only one element → always peak → return its index 0
    if (arr[0] > arr[1])
      return 0; // First element -> No left neighbor -> return its index 0
    if (arr[n - 1] > arr[n - 2])
      return n - 1; // Last element -> No right neighbor -> return last element index

    /* Initialize two pointers: low to 1 and high to n-2(n is the size of the array), as the 0th and (n-1)th index has already been dealt with in the edge cases. */
    int low = 1, high = n - 2;

    while (low <= high)
    {
      int mid = low + (high)-low / 2;

      // If arr[mid] is the peak
      if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
        return mid;

      // If we are in the left
      if (arr[mid] > arr[mid - 1])
        low = mid + 1;

      // If we are in the right
      else
        high = mid - 1;
    }

    // Return -1 if no peak element

    return -1;
  }
};

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 5, 1};

  Solution sol;

  int ans = sol.findPeakElement(arr);

  cout << "The peak is at index: " << ans << "\n";

  return 0;
}

// Time Complexity:O(log N) and Space Complexity: O(1).