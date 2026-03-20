#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> rearrangeArray(vector<int> &nums)
  {
    int n = nums.size();

    // Initialize a result vector of size n
    vector<int> ans(n, 0);

    // Initialize indices for positive and negative elements
    int posIndex = 0, negIndex = 1;

    // Traverse through each element in nums
    for (int i = 0; i < n; i++)
    {
      // If current element is positive, place it at the even index in ans
      if (nums[i] > 0)
      {
        ans[posIndex] = nums[i];
        posIndex += 2; // Move to the next even index
      }
      // If current element is negative, place it at the odd index in ans
      else
      {
        ans[negIndex] = nums[i];
        negIndex += 2; // Move to the next odd index
      }
    }
    return ans;
  }
};

int main()
{
  vector<int> nums = {3, 1, -2, -5, 2, -4};

  Solution sol;

  vector<int> ans = sol.rearrangeArray(nums);

  cout << "rearranged array : ";
  for (auto it : ans)
  {
    cout << it << " ";
  }
  return 0;
}

// TC -> O(N) and SC-> O(N)