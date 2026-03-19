#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int majorityElement(vector<int> &nums)
  {
    int n = nums.size();

    // Hash map to store frequency of elements
    unordered_map<int, int> mp;

    // count frequency of elements
    for (auto it : nums)
    {
      mp[it]++;
    }
    for (auto pair : mp)
    {
      if (pair.second > n / 2)
      {
        return pair.first;
      }
    }
    return -1; // if no majority element is found
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

// Time Complexity: O(N) and Space Complexity: O(N)