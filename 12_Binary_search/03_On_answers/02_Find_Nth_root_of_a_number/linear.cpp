/* Given two numbers N and M, find the Nth root of M. The Nth root of a number M is defined as a number X such that when X is raised to the power of N, it equals M. If the Nth root is not an integer, return -1. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int NthRoot(int n, int m)
  {
    for (int i = 1; i <= m; i++)
    {

      long long val = pow(i, n);

      if (val == m)
      {
        return i;
      }
      else if (val > m)
      {
        break;
      }
    }
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

// Time Complexity -> O(M × log N) and  Space Complexity -> O(1)