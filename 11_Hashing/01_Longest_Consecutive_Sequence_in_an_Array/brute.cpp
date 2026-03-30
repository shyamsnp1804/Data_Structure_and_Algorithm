
#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
  int longestConsecutive(vector<int> &nums)
  {
    // If the array is empty
    if (nums.size() == 0)
    {
      return 0;
    }
    int n = nums.size();
    // Initialize the longest sequence length
    int longest = 1;

    // Iterate through each element in the array
    for (int i = 0; i < n; i++)
    {
      // Current element
      int x = nums[i];
      // Count of the current sequence
      int cnt = 1;

      // Search for consecutive numbers
      while (linearSearch(nums, x + 1) == true)
      {
        // Move to the next number in the sequence
        x += 1;
        cnt += 1;
      }

      longest = max(longest, cnt);
    }
    return longest;
  }

private:
  bool linearSearch(vector<int> &a, int num)
  {
    int n = a.size();
    // Traverse through the array
    for (int i = 0; i < n; i++)
    {
      if (a[i] == num)
        return true;
    }
    return false;
  }
};

int main()
{
  vector<int> a = {100, 4, 200, 1, 3, 2};

  Solution solution;

  int ans = solution.longestConsecutive(a);
  cout << "The longest consecutive sequence is " << ans << "\n";
  return 0;
}
