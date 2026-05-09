#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool searchMatrix(vector<vector<int>> &mat, int target)
  {
    // check if matrix is empty
    if (mat.empty() || mat[0].empty())
    {
      return false;
    }

    int n = mat.size();    // no of rows
    int m = mat[0].size(); // no of columns

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if (mat[i][j] == target)
        {
          return true;
        }
      }
    }
    return false;
  }
};

int main()
{

  vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
  int target = 8;

  Solution sol;

  bool result = sol.searchMatrix(matrix, target);

  result ? cout << "true\n" : cout << "false\n";

  return 0;
}

// T.C-> O(n*m) and S.C-> O(1)