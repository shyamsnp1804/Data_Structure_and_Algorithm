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

    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
      mpp[nums[i]]++;
    }
    for (auto it : mpp)
    {
      int freq = it.second;
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
// Time Complexity: O(N) and Space Complexity: O(N)