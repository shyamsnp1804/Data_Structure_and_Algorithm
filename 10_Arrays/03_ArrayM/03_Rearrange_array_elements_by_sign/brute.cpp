#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> rearrangeArray(vector<int> &nums)
  {
    int n = nums.size();

    // two array for positive and negative element
    vector<int> pos, neg;

    // iterate nums and put +ve and -ve element in their respective array
    for (auto it : nums)
    {
      if (it > 0)
      {
        pos.push_back(it);
      }
      else
      {
        neg.push_back(it);
      }
    }

    // iterate +ve and -ve array simultaneously and put +ve element at even index and -ve element at odd index
    for (int i = 0; i < n / 2; i++)
    {
      nums[2 * i] = pos[i];
      nums[2 * i + 1] = neg[i];
    }
    return nums;
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