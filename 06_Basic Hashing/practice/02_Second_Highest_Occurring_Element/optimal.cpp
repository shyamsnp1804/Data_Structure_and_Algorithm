#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int secondMostFrequentElement(vector<int> &nums)
  {

    int n = nums.size();
    int maxFreq = 0;
    int secMaxFreq = 0;
    int maxEle = -1;
    int secEle = -1;

    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
      mpp[nums[i]]++;
    }
    for (auto it : mpp)
    {
      int ele = it.first;   // Key
      int freq = it.second; // Value

      if (freq > maxFreq)
      {
        secMaxFreq = maxFreq;
        maxFreq = freq;
        secEle = maxEle;
        maxEle = ele;
      }
      else if (freq == maxFreq)
      {
        maxEle = min(maxEle, ele);
      }
      else if (freq > secMaxFreq)
      {
        secMaxFreq = freq;
        secEle = ele;
      }
      else if (freq == secMaxFreq)
      {
        secEle = min(secEle, ele);
      }
    }
    return secEle;
  }
};

int main()
{
  vector<int> nums = {4, 4, 5, 5, 6, 7};

  Solution sol;

  int ans = sol.secondMostFrequentElement(nums);

  cout << "The second highest occurring element in the array is: " << ans;

  return 0;
}

// Time Complexity: O(N) and Space Complexity: O(N)