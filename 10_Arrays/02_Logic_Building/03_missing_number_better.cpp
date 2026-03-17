#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int missingNumber(vector<int> &nums)
  {
    int n = nums.size();

    int freq[n + 1] = {0}; // hash array to store frequencies , initially 0

    // iterate nums array and store frequencies
    for (auto it : nums)
    {
      freq[it]++;
    }
    // iterate hash array to find frequencies of number from 0 to n
    for (int i = 0; i <= n; i++)
    {
      if (freq[i] == 0)
      {
        return i;
      }
    }
    return -1;
  }
};

int main()
{
  vector<int> nums = {1, 3, 6, 4, 2, 5};

  // Create an instance of the Solution class
  Solution solution;

  /* Call the missingNumber method
  to find the missing number*/
  int ans = solution.missingNumber(nums);

  cout << "The missing number is: " << ans << endl;

  return 0;
}

// Time Complexity: O(2N) and Space Complexity: O(N)