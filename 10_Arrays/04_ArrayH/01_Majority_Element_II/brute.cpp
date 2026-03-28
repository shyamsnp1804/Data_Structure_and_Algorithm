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

    // iterate over each element
    for (int i = 0; i < n; i++)
    {
      // check if current element is NOT already considered
      // NOTE: only checking result[0], assumes max 1 element present
      if (result.size() == 0 || result[0] != nums[i])
      {
        int cnt = 0; // counter for frequency

        // count frequency of nums[i]
        for (int j = 0; j < n; j++)
        {
          if (nums[j] == nums[i])
          {
            cnt++;
          }
        }

        // if frequency > n/3, add to result
        if (cnt > n / 3)
        {
          result.push_back(nums[i]);
        }

        // at most 2 elements can satisfy > n/3 condition
        // so break early if we already found 2
        if (result.size() == 2)
        {
          break;
        }
      }
    }
    sort(result.begin(), result.end());
    // return list of majority elements
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

// T.C -O(N^2) and S.C - O(1)