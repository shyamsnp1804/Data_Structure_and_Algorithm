#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int floorSqrt(int n)
  {
    int low = 0, high = n; // Search space from 0 to n
    int ans = 0;           // Variable to store the final answer

    // Binary search loop
    while (low <= high)
    {
      // Calculate mid to avoid overflow
      int mid = low + (high - low) / 2;

      // If mid^2 is less than or equal to n,
      // then mid can be a possible answer
      if (mid <= n / mid)
      {
        ans = mid;     // Store the current valid answer
        low = mid + 1; // Move to the right to find a larger value
      }
      else
      {
        // If mid^2 is greater than n,
        // discard the right half
        high = mid - 1;
      }
    }

    // Return the floor value of square root
    return ans;
  }
};

int main()
{
  int n = 28; // Input number

  Solution sol;

  int ans = sol.floorSqrt(n);

  cout << "The floor of square root of " << n
       << " is: " << ans << "\n";

  return 0;
}