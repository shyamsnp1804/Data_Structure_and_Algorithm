/* Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  // Function to count number of subarrays with sum = k
  int countSubarrays(vector<int> &nums, int k)
  {
    int n = nums.size();

    // HashMap to store prefix sum and its frequency
    // key   -> prefix sum
    // value -> how many times it appeared
    unordered_map<int, int> preSumMap;

    // VERY IMPORTANT:
    // This handles subarrays starting from index 0
    preSumMap[0] = 1;

    int sum = 0; // running prefix sum
    int cnt = 0; // result: number of valid subarrays

    for (int i = 0; i < n; i++)
    {
      // Step 1: update prefix sum
      sum += nums[i];

      // Step 2: check if there exists a prefix sum = (sum - k)
      // If yes → subarray(s) with sum k exist ending at index i
      int rem = sum - k;

      if (preSumMap.find(rem) != preSumMap.end())
      {
        // Add frequency of (sum - k)
        // because multiple occurrences mean multiple subarrays
        cnt += preSumMap[rem];
      }

      // Step 3: store current prefix sum in map
      preSumMap[sum]++;
    }

    return cnt;
  }
};

int main()
{
  vector<int> a = {-1, 1, 1};
  int k = 1;

  Solution solution;

  int ans = solution.countSubarrays(a, k);

  cout << "The number of subarrays is: " << ans << "\n";

  return 0;
}