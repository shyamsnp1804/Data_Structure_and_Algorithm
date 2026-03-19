#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int majorityElement(vector<int> &nums)
  {

    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
      int count = 0;
      for (int j = 0; j < n; j++)
      {
        if (nums[i] == nums[j])
        {
          count++;
        }
      }
      if (count > (n / 2))
      {
        return nums[i];
      }
    }
    return -1; // majority element not found
  }
};

int main()
{
  vector<int> arr = {2, 2, 1, 1, 1, 2, 2};

  Solution sol;

  int ans = sol.majorityElement(arr);

  cout << "The majority element is: " << ans << endl;

  return 0;
}

// Time Complexity: O(N^2) and Space Complexity: O(1)
