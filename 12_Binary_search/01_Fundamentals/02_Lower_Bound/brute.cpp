#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int lowerBound(vector<int> &nums, int x)
  {
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {

      if (nums[i] >= x)
      {

        return i;
      }
    }
    // If lower bound of target is not found
    return n;
  }
};

int main()
{
  vector<int> arr = {1, 2, 2, 3};
  int x = 2;

  Solution sol;

  int ind = sol.lowerBound(arr, x);

  cout << "The lower bound is the index: " << ind << "\n";

  return 0;
}