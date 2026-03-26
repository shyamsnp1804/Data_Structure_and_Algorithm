#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  // Function to find maximum subarray sum
  int maxSubArray(vector<int> &nums)
  {

    /*
      Initialize maximum sum with smallest possible value
      so that any subarray sum can replace it
    */
    int maxi = INT_MIN;

    // Outer loop → selects starting index of subarray
    for (int i = 0; i < nums.size(); i++)
    {

      /*
        Variable to store sum of current subarray
        Instead of recomputing (like O(N³)),
        we reuse previous sum → optimization
      */
      int sum = 0;

      /*
        Inner loop → selects ending index of subarray
        starting from i

        For each j:
        sum represents sum of subarray nums[i..j]
      */
      for (int j = i; j < nums.size(); j++)
      {

        /*
          Add current element to existing sum
          This avoids recomputing sum from scratch
        */
        sum += nums[j];

        /*
          Update maximum sum found so far
        */
        maxi = max(maxi, sum);
      }
    }

    // Return maximum subarray sum
    return maxi;
  }
};

int main()
{
  vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

  Solution sol;

  int maxSum = sol.maxSubArray(arr);

  cout << "The maximum subarray sum is: " << maxSum << endl;

  return 0;
}

/*
  Algorithm Type: Improved Brute Force

  Time Complexity: O(N²)
  - Two nested loops (i, j)

  Space Complexity: O(1)

  Key Optimization:
  - Instead of recalculating sum using a third loop,
    we incrementally build sum using sum += nums[j]
*/