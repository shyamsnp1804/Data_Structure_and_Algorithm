#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> unionArray(vector<int> &nums1, vector<int> &nums2)
  {
    set<int> s;        // storing unique elements
    vector<int> Union; // union vector for storing final result

    // Insert all elements of nums1 into the set
    for (int num : nums1)
    {
      s.insert(num);
    }

    // Insert all elements of nums2 into the set
    for (int num : nums2)
    {
      s.insert(num);
    }

    // Convert the set to vector to get the union
    for (int num : s)
    {
      Union.push_back(num);
    }

    return Union;
  }
};

int main()
{
  vector<int> nums1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  vector<int> nums2 = {2, 3, 4, 4, 5, 11, 12};

  Solution finder;

  vector<int> Union = finder.unionArray(nums1, nums2);

  cout << "Union of nums1 and nums2 is:" << endl;
  for (auto it : Union)
  {
    cout << it << " ";
  }
  cout << endl;

  return 0;
}