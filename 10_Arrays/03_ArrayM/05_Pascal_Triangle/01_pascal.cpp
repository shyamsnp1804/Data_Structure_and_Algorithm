#include <bits/stdc++.h>
using namespace std;

// Type 1: Find a Specific Element ->  at r^th row and c^th column

class Solution
{
public:
  int pascalTriangle(int r, int c)
  {
    return nCr(r - 1, c - 1);
  }

private:
  int nCr(int n, int r)
  {
    // choose the smaller value for lesser iteration
    if (r > n - r)
      r = n - r;

    // base case
    if (r == 1)
      return n;

    // store result
    int res = 1;

    // calculate nCr
    for (int i = 0; i < r; i++)
    {
      res = res * (n - i);
      res = res / (i + 1);
    }
    return res;
  }
};

int main()
{
  int row = 5, col = 3;

  Solution sol;

  int ans = sol.pascalTriangle(row, col);

  cout << "The element in the rth row and cth column in pascal's triangle is: " << ans;

  return 0;
}

// T.C -> O(r) and S.C -> O(1)