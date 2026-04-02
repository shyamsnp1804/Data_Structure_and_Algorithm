#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int subarraysWithXorK(vector<int> &nums, int k)
  {
    int n = nums.size();

    unordered_map<int, int> mp;
    mp[0] = 1; // important for subarrays starting from index 0

    int xr = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
      xr = xr ^ nums[i]; // prefix XOR

      int need = xr ^ k;

      if (mp.find(need) != mp.end())
      {
        cnt += mp[need];
      }

      mp[xr]++;
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
