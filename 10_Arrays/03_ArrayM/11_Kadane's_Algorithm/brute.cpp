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
      so that any subarray sum will be larger than this initially
    */
    int maxi = INT_MIN;

    // Outer loop → selects starting index of subarray
    for (int i = 0; i < nums.size(); i++)
    {

      /*
        Middle loop → selects ending index of subarray
        starting from index i

        For a fixed i, this loop generates all subarrays:
        nums[i], nums[i..i+1], nums[i..i+2], ..., nums[i..n-1]
      */
      for (int j = i; j < nums.size(); j++)
      {

        // Variable to store sum of current subarray nums[i..j]
        int sum = 0;

        /*
          Inner loop → calculates sum of elements
          from index i to j (inclusive)

          This recomputes sum every time → makes it inefficient
        */
        for (int k = i; k <= j; k++)
        {
          sum += nums[k];
        }

        // Update maximum sum found so far Compare current subarray sum with previous maximum
        maxi = max(maxi, sum);
      }
    }
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
  Algorithm Type: Brute Force (All Subarrays)

  Time Complexity: O(N^3)
  - Three nested loops (i, j, k)

  Space Complexity: O(1)
  - No extra space used (only variables)

  Key Idea:
  - Generate all possible subarrays
  - Compute their sums
  - Track the maximum sum
*/