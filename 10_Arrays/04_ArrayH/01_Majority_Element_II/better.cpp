#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> majorityElementTwo(vector<int> &nums)
  {
    int n = nums.size(); // size of array

    // vector to store majority elements (> n/3)
    vector<int> result;

    // least occurrence of the majority element
    int mini = int(n / 3) + 1;

    // hash map for frequency calculation
    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
      mpp[nums[i]]++;

      // checking if nums[i] is the majority element
      if (mpp[nums[i]] == mini)
      {
        result.push_back(nums[i]);
      }

      if (result.size() == 2)
      {
        break;
      }
    }
    return result;
  }
};

int main()
{
  vector<int> arr = {11, 33, 33, 11, 33, 11};

  Solution sol;

  vector<int> ans = sol.majorityElementTwo(arr);

  cout << "The majority elements are: ";
  for (auto it : ans)
  {
    cout << it << " ";
  }
  cout << "\n";

  return 0;
}

// T.C -O(N) and S.C - O(N)