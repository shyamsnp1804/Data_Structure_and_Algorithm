// BRUTE FORCE

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int sumHighestAndLowestFrequency(vector<int> &nums)
  {
    int n = nums.size();
    int highestFreq = 0;
    int lowestFreq = n;
    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++)
    {
      if (visited[i])
        continue;

      int freq = 0;

      for (int j = i; j < n; j++)
      {
        if (nums[i] == nums[j])
        {
          freq++;
          visited[j] = true;
        }
      }
      highestFreq = max(highestFreq, freq);
      lowestFreq = min(lowestFreq, freq);
    }
    return highestFreq + lowestFreq;
  }
};

int main()
{
  vector<int> nums = {4, 4, 5, 5, 6, 7};

  Solution sol;

  int ans = sol.sumHighestAndLowestFrequency(nums);

  cout << "The sum of highest and lowest frequency in the array is: " << ans; // output -> 3

  return 0;
}
// Time Complexity: O(N2) and Space Complexity: O(N)