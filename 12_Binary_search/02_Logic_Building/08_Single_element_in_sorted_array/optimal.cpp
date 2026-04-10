#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int singleNonDuplicate(vector<int> &nums)
  {
    int low = 0, high = nums.size() - 1;

    while (low < high)
    {
      int mid = (low + high) / 2;

      // Make mid even
      if (mid % 2 == 1)
        mid--;

      // Check pair pattern
      if (nums[mid] == nums[mid + 1])
      {
        // Pair is valid → move right
        low = mid + 2;
      }
      else
      {
        // Pattern breaks → move left
        high = mid;
      }
    }

    return nums[low];
  }
};

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4};
    
    Solution sol;
    
    int ans = sol.singleNonDuplicate(nums);
    
    cout << "The single element is: " << ans << "\n";
    
    return 0;
}