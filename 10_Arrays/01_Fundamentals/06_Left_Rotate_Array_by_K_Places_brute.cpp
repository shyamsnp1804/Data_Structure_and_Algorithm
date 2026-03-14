#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> rotateArray(vector<int> &nums, int k)
  {
    int n = nums.size();
    k = k % n; // To avoid unnecessary rotations

    vector<int> temp;

    // store first k element in temp array
    for (int i = 0; i < k; i++)
    {
      temp.push_back(nums[i]);
    }
    // shift remaining n-k elements to the left
    for (int i = k; i < n; i++)
    {
      nums[i - k] = nums[i];
    }
    // put back the k element at the end
    for (int i = 0; i < k; i++) // iterating temp array
    {
      nums[n - k + i] = temp[i];
    }
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

// Time Complexity: O(N) and Space Complexity: O(K)