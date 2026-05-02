/* Given a non-empty grid mat consisting of only 0s and 1s, where all the rows are sorted in ascending order, find the index of the row with the maximum number of ones.

If two rows have the same number of ones, consider the one with a smaller index. If no 1 exists in the matrix, return -1. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int rowWithMax1s(vector<vector<int>> &mat)
  {
    int n = mat.size();    // total no of rows = size of matrix
    int m = mat[0].size(); // total no of columns = size of any row -> here it is 1st row

    // Variable to store the maximum count of 1's found
    int cnt_max = 0;

    // Variable to store the index of the row with max 1's
    int index = -1;

    // Traverse the matrix row by row
    for (int i = 0; i < n; i++)
    {
      int cnt_ones = 0;

      for (int j = 0; j < m; j++)
      {
        cnt_ones += mat[i][j];
      }

      if (cnt_ones > cnt_max)
      {
        cnt_max = cnt_ones;
        index = i;
      }
    }
    return index;
  }
};

int main()
{
  vector<vector<int>> matrix = {{1, 1, 1}, {0, 0, 1}, {0, 0, 0}};

  Solution sol;

  cout << "The row with maximum number of 1's is: " << sol.rowWithMax1s(matrix) << '\n';

  return 0;
}

/* Time Complexity: O(N X M), where N is the number of rows in the matrix, M is the number of columns in each row. As, nested loops are being used to traverse the matrix.

Space Complexity: As no additional space is used, so the Space Complexity is O(1). */