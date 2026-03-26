#include <bits/stdc++.h>
using namespace std;

/*
  Algorithm Used: Dutch National Flag Algorithm
  (3-way partitioning algorithm by Edsger W. Dijkstra)

  Problem:
  Sort an array containing only 0s, 1s, and 2s in a single pass.

  Approach:
  Use three pointers:
  - low  → boundary for 0s
  - mid  → current element
  - high → boundary for 2s

  Idea:
  - Place 0s on the left
  - Place 2s on the right
  - Keep 1s in the middle
*/

class Solution
{
public:
  void sortZeroOneTwo(vector<int> &nums)
  {

    // 3 pointers: low, mid, high
    int low = 0, mid = 0, high = nums.size() - 1;
    while (mid <= high)
    {
      if (nums[mid] == 0)
      {

        // Swap nums[low] and nums[mid], then move both low and mid pointers forward
        swap(nums[low], nums[mid]);
        low++;
        mid++;
      }
      else if (nums[mid] == 1)
      {
        // Move mid pointer forward
        mid++;
      }
      else
      {
        // Swap nums[mid] and nums[high], then move high pointer backward
        swap(nums[mid], nums[high]);
        high--;
      }
    }
  }
};

int main()
{
  vector<int> nums = {0, 2, 1, 2, 0, 1};

  Solution sol;

  sol.sortZeroOneTwo(nums);

  cout << "After sorting:" << endl;
  for (int i = 0; i < nums.size(); i++)
  {
    cout << nums[i] << " ";
  }
  cout << endl;

  return 0;
}

// Time Complexity: O(N) and Space Complexity: O(1)