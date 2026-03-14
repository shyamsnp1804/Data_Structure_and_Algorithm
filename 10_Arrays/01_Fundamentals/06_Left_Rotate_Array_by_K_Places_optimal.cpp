#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
  void reverseArray(vector<int> &nums, int start, int end)
  {
    while (start < end)
    {
      int temp = nums[start];
      nums[start] = nums[end];
      nums[end] = temp;
      start++, end--;
    }
  }

public:
  vector<int> rotateArray(vector<int> &nums, int k)
  {
    int n = nums.size();
    k = k % n;
    // Reverse the first k elements
    reverseArray(nums, 0, k - 1);

    // Reverse the last n-k elements
    reverseArray(nums, k, n - 1);

    // Reverse the entire vector
    reverseArray(nums, 0, n - 1);
    return nums;
  }
};

int main()
{
  vector<int> nums = {1, 2, 3, 4, 5, 6};
  int k = 2;
  Solution sol;

  vector<int> ans = sol.rotateArray(nums, k);
  cout << "Array after rotating elements by " << k << " places: ";
  for (auto it : ans)
  {
    cout << it << " ";
  }
  return 0;
}

// Time Complexity: O(N) and Space Complexity: O(1)