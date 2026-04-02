/* Given an array of integers nums and an integer k, return the total number of subarrays whose XOR equals to k. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int subarraysWithXorK(vector<int> &nums, int k)
  {
    int n = nums.size();
    int cnt = 0;

    // Fix starting point of subarray
    for (int i = 0; i < n; i++)
    {
      int xorr = 0; // XOR reset for every new starting index

      // Subarray from i to j
      for (int j = i; j < n; j++)
      {
        xorr = xorr ^ nums[j]; // keep extending subarray

        if (xorr == k)
          cnt++;
      }
    }

    return cnt;
  }
};

int main()
{
  vector<int> a = {4, 2, 2, 6, 4};
  int k = 6;

  Solution solution;
  int ans = solution.subarraysWithXorK(a, k);

  cout << "The number of subarrays with XOR k is: " << ans << "\n";
  return 0;
}

// Time Complexity  O(n²) and Space Complexity ->  O(1)