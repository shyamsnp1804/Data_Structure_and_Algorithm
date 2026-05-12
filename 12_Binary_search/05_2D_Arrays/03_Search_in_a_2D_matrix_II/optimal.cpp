#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool searchMatrix(vector<vector<int>> &mat, int target)
  {
    int n = mat.size();
    int m = mat[0].size();

    int row = 0, col = m - 1;

    while (row < n && col >= 0)
    {
      if (mat[row][col] == target)
        return true;
      else if (mat[row][col] > target)
        col--;
      else
        row++;
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

/*
Time Complexity - O(n + m) where n is the number of rows and m is the number of columns, because in the worst case we traverse from the top-right corner to the bottom-left corner, covering at most n + m steps.

Space Complexity - O(1) because the algorithm uses a constant amount of extra space for pointers, regardless of the input matrix size.
*/