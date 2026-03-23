#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<vector<int>> threeSum(vector<int> &nums, int target)
  {
    int n = nums.size();
    set<vector<int>> st; // to store unique triplets

    for (int i = 0; i < n; i++)
    {
      set<int> hashSet; // after first iteration like re-initialize the  hash set

      for (int j = i + 1; j < n; j++)
      {
        int thirdEle = -(nums[i] + nums[j]);
        if (hashSet.find(thirdEle) != hashSet.end())
        {

          vector<int> temp = {nums[i], nums[j], thirdEle};
          sort(temp.begin(), temp.end()); // remove duplicate
          st.insert(temp);
        }
        // if thirdEle is not present in hashset then insert that thirdEle in hash set
        hashSet.insert(nums[j]);
      }
    }

    // convert set to vector
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
  }
};

int main()
{
  vector<int> nums = {-1, 0, 1, 2, -1, -4};
  int target = 0;

  Solution sol;
  vector<vector<int>> result = sol.threeSum(nums, target);

  cout << "Triplets that sum to " << target << " are:\n";

  for (auto triplet : result)
  {
    cout << "[ ";
    for (int num : triplet)
    {
      cout << num << " ";
    }
    cout << "]\n";
  }

  return 0;
}

// Time Complexity: O(n² log n)  (due to set insertion) and Space Complexity: O(n²)