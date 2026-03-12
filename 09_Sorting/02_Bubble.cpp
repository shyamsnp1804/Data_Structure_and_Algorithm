#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> bubbleSort(vector<int> &nums)
  {
    int n = nums.size();
    // Traverse through the array
    for (int i = n - 1; i >= 0; i--)
    {
      // Track if swaps are made
      bool didSwap = false;
      for (int j = 0; j <= i - 1; j++)
      {
        if (nums[j] > nums[j + 1])
        {
          // Swap if next element is smaller
          swap(nums[j], nums[j + 1]);
          didSwap = true;
        }
      }
      // Break out of loop if no swaps done
      if (!didSwap)
      {
        break;
      }
    }
    return nums;
  }
};

int main()
{
  vector<int> arr = {7, 5, 9, 2, 8};

  cout << "original array : ";
  for (auto it : arr)
  {
    cout << it << " ";
  }
  cout << endl;

  Solution sol;

  vector<int> sortedArr = sol.bubbleSort(arr);

  cout << "Sorted array: ";
  for (auto it : sortedArr)
  {
    cout << it << " ";
  }
  return 0;
}

// Time Complexity: O(N2)
// Space Complexity: O(1)
// Algo - push the max by adjacent swapping