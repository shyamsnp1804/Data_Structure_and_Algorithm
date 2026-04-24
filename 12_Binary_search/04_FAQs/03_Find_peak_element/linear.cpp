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

    // Iterate through the arrayto find the peak element
    for (int i = 0; i < n; i++)
    {

      // Check if arr[i] is a peak
      if ((i == 0 || arr[i - 1] < arr[i]) && (i == n - 1 || arr[i] > arr[i + 1]))
      {

        // Return the index of peak element
        return i;
      }
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

// Time Complexity:O( N) and Space Complexity: O(1).