#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  void rotateMatrix(vector<vector<int>> &matrix)
  {
    // size of matrix
    int n = matrix.size();

    // dummy matrix to store rotated values
    vector<vector<int>> rotated(n, vector<int>(n, 0));

    // Iterate through elements of original matrix and put in dummy matrix
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        rotated[j][n - i - 1] = matrix[i][j]; // move elements from (i, j) → (j, n - i - 1)
      }
    }

    // iterate dummy matrix and Copy back elements to original matrix
    for (int i = 0; i < rotated.size(); i++)
    {
      for (int j = 0; j < rotated.size(); j++)
      {
        matrix[i][j] = rotated[i][j];
      }
    }
  }
};

int main()
{
  vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  Solution sol;

  sol.rotateMatrix(arr);

  cout << "rotated matrix : " << endl;

  for (auto it : arr)
  {
    for (auto val : it)
    {
      cout << val << " ";
    }
    cout << endl;
  }
  return 0;
}

// T.C - O(N^2) and S.C - O(N^2) -> to store the elements in the dummy matrix