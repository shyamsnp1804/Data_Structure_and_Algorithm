#include <bits/stdc++.h>
using namespace std;

// Type 2: Print Entire Row -> given n find n^th row element

class Solution
{
public:
  vector<int> pascalTriangle(int row)
  {
    vector<int> ans(row);

    ans[0] = 1;

    for (int i = 1; i < row; i++)
    {
      ans[i] = (ans[i - 1] * (row - i)) / i; // rem -> i is column
    }
    return ans;
  }
};

int main()
{
  int row = 5;

  Solution sol;

  vector<int> ans = sol.pascalTriangle(row);

  cout << "The element at the rth row  in pascal's triangle is: ";
  for (auto it : ans)
  {
    cout << it << " ";
  }

  return 0;
}

// T.C -> O(r) and S.C -> O(r)