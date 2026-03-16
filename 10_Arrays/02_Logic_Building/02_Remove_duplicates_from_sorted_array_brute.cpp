#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int removeDuplicate(vector<int> &nums)
  {
    // set for storing unique elements
    set<int> st;

    // iterate array and put elements in set
    for (auto i : nums)
    {
      st.insert(i);
    }

    // size of set
    int k = st.size();

    // Copy unique elements from set to array
    int j = 0;
    for (auto value : st)
    {
      nums[j] = value;
      j++;
    }
    // print modified array
    cout << "Array after removing the duplicates: ";
    for (int i = 0; i < k; i++)
    {
      cout << nums[i] << " ";
    }
    cout << endl;
    return k;
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

// Time Complexity: O(N * log N) + O(N) and Space Complexity: O(N)