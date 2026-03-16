#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int removeDuplicate(vector<int> &nums)
  {
    int i = 0; // initialize pointer to identify unique element
    for (int j = i + 1; j < nums.size(); j++)
    {
      if (nums[i] != nums[j])
      {
        i++;
        nums[i] = nums[j];
      }
    }
    // print modified array
    cout << "Array after removing the duplicates: ";
    for (int k = 0; k <= i; k++)
    {
      cout << nums[k] << " ";
    }
    cout << endl;

    return i + 1; // number of unique elements
  }
};

int main()
{
  vector<int> nums = {1, 1, 2, 2, 2, 3, 3};
  Solution sol;

  int k = sol.removeDuplicate(nums);

  cout << "Number of unique elements in Array : " << k;

  return 0;
}

// Time Complexity: O(N) and Space Complexity: O(1)