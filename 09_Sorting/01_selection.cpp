#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> selectionSort(vector<int> &nums)
  {
    // Loop through the unsorted array
    for (int i = 0; i < nums.size() - 1; i++)
    {
      // Assume the current index is the smallest
      int minIndex = i;
      // Find the index of the smallest element
      for (int j = i + 1; j < nums.size(); j++)
      {
        // Update minIndex if smaller element is found
        if (nums[j] < nums[minIndex])
        {
          minIndex = j;
        }
      }
      // Swap only if minIndex is changed
      if (minIndex != i)
      {
        swap(nums[minIndex], nums[i]);
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

  vector<int> sortedArr = sol.selectionSort(arr);

  cout << "Sorted array: ";
  for (auto it : sortedArr)
  {
    cout << it << " ";
  }
  return 0;
}

// Time Complexity: O(N2)
// Space Complexity: O(1)
// Algo - select the minimum and swap it