#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
  bool binarySearch(vector<int> &mat, int target)
  {
    int n = mat.size();
    int low = 0, high = n - 1;

    while (low <= high)
    {
      int mid = low + (high - low) / 2;

      if (mat[mid] == target)
        return true;
      else if (target > mat[mid])
        low = mid + 1;
      else
        high = mid - 1;
    }
    // Return false if target not found
    return false;
  }

public:
  bool searchMatrix(vector<vector<int>> &mat, int target)
  {
    int n = mat.size();
    int m = mat[0].size();

    for (int i = 0; i < n; i++)
    {
      /* check If target lies between first and last element,
        then only perform binary search. */

      if (mat[i][0] <= target && target <= mat[i][m - 1])
      {
        return binarySearch(mat[i], target);
        // mat[i] → one complete row of the matrix means pass the current row to the binary search function in which target might be present
      }
    }
    // Return false if target is not found
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

// Time Complexity: O(N + logM) and Space Complexity is O(1).