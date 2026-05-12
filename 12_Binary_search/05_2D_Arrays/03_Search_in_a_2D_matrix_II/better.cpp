#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
  bool binarySearch(vector<int> &matrix, int target)
  {
    int n = matrix.size();

    int low = 0, high = n - 1;

    while (low <= high)
    {
      int mid = low + (high - low) / 2;

      if (matrix[mid] == target)
        return true;
      else if (target > matrix[mid])
        low = mid + 1;
      else
        high = mid - 1;
    }
    return false;
  }

public:
  bool searchMatrix(vector<vector<int>> &matrix, int target)
  {
    int n = matrix.size();
    int m = matrix[0].size();

    for (int i = 0; i < n; i++)
    {
      bool flag = binarySearch(matrix[i], target);

      if (flag)
        return true;
    }
    return false;
  }
};

int main()
{
  vector<vector<int>> matrix = {{1, 4, 7, 11, 15},
                                {2, 5, 8, 12, 19},
                                {3, 6, 9, 16, 22},
                                {10, 13, 14, 17, 24},
                                {18, 21, 23, 26, 30}};
  int target = 8;

  Solution sol;

  bool result = sol.searchMatrix(matrix, target);

  result ? cout << "true\n" : cout << "false\n";

  return 0;
}

// Time Complexity: O(N * logM) and Space Complexity: O(1).