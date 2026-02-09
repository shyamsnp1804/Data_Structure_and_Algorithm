#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int mostFrequentElement(vector<int> &nums)
  {
    int n = nums.size(); // size of vector
    int maxCount = 0;    // Variable to store maximum frequency
    int maxEle;          // Variable to store element  with maximum frequency

    unordered_map<int, int> mpp; // Hash Map

    for (int i = 0; i < n; i++)
    {
      mpp[nums[i]]++;
    }

    for (auto it : mpp)
    {
      int Ele = it.first;    // key
      int count = it.second; // value

      if (count > maxCount)
      {
        maxCount = count;
        maxEle = Ele;
      }
      else if (count == maxCount)
      {
        maxEle = min(maxEle, Ele);
      }
    }
    return maxEle;
  }
};

int main()
{
  vector<int> nums = {4, 4, 5, 5, 6};

  Solution sol;
  int ans = sol.mostFrequentElement(nums);

  cout << "The highest occurring element in the array is: " << ans;
  return 0;
}