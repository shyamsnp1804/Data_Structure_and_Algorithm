#include <bits/stdc++.h>
using namespace std;

// Type 3: Print Full Pascal Triangle -> Given n, print all rows till n

class Solution
{
private:
  vector<int> generateRow(int row)
  {
    vector<int> ans(row);

    ans[0] = 1;

    for (int i = 1; i < row; i++)
    {
      ans[i] = (ans[i - 1] * (row - i)) / i; // rem -> i is column
    }
    return ans;
  }

public:
  vector<vector<int>> pascalTriangle(int n)
  {
    vector<vector<int>> temp;

    for (int row = 1; row <= n; row++)
    {
      temp.push_back(generateRow(row));
    }
    return temp;
  }
};

int main()
{
  int n = 5;

  Solution sol;

  vector<vector<int>> ans = sol.pascalTriangle(n);

  cout << "The  pascal triangle is: ";
  for (auto row : ans)
  {
    for (auto val : row)
    {
      cout << val << " ";
    }
    cout << endl;
  }
  return 0;
}