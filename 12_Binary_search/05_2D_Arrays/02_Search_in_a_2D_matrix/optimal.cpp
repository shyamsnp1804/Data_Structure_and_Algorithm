#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool searchMatrix(vector<vector<int>> &mat, int target)
  {
    int n = mat.size();
    int m = mat[0].size();

    // Treat 2D matrix as a sorted 1D array
    int low = 0, high = n * m - 1;

    while (low <= high)
    {
      int mid = low + (high - low) / 2;

      // Convert 1D index back to 2D coordinates
      int row = mid / m, col = mid % m;

      if (mat[row][col] == target)
        return true;
      else if (target > mat[row][col])
        low = mid + 1;
      else
        high = mid - 1;
    }
    // Return false if target not found
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

// T.C-> O(log(n*m)) and S.C-> O(1)