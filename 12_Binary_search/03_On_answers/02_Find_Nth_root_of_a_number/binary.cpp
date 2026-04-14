/* Given two numbers N and M, find the Nth root of M. The Nth root of a number M is defined as a number X such that when X is raised to the power of N, it equals M. If the Nth root is not an integer, return -1. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  // Function to calculate (mid^n)
  // Also stops early if value exceeds m to avoid overflow
  long long power(int mid, int n, int m)
  {
    long long ans = 1;

    // Multiply mid 'n' times
    for (int i = 0; i < n; i++)
    {
      ans *= mid;

      // If value becomes greater than m,
      // no need to continue (helps prevent overflow and saves time)
      if (ans > m)
        return ans;
    }

    return ans; // return final value of mid^n
  }

  // Function to find the Nth root of m
  int NthRoot(int n, int m)
  {
    int low = 1, high = m;

    // Binary search on possible answers (1 to m)
    while (low <= high)
    {
      // Find middle value
      int mid = low + (high - low) / 2;

      // Calculate mid^n
      long long val = power(mid, n, m);

      // If exact match found, return mid
      if (val == m)
        return mid;

      // If mid^n is smaller than m, search in right half
      else if (val < m)
        low = mid + 1;

      // If mid^n is greater than m, search in left half
      else
        high = mid - 1;
    }

    // If no integer Nth root exists, return -1
    return -1;
  }
};

int main()
{
  int n = 3, m = 27;

  Solution sol;

  int ans = sol.NthRoot(n, m);

  cout << "The answer is: " << ans << "\n";

  return 0;
}

// Time Complexity -> O(N × log M) and  Space Complexity -> O(1)