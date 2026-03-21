#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> spiralOrder(vector<vector<int>> &matrix)
  {
    // ans vector to store result;
    vector<int> ans;

    // no of rows and columns
    int n = matrix.size();
    int m = matrix[0].size();

    int top = 0, bottom = n - 1, left = 0, right = m - 1;

    while (top <= bottom && left <= right)
    {
      // traverse left to right
      for (int i = left; i <= right; i++)
      {
        ans.push_back(matrix[top][i]);
      }
      top++;
      // traverse top to bottom
      for (int i = top; i <= bottom; i++)
      {
        ans.push_back(matrix[i][right]);
      }
      right--;
      // traverse right to left
      if (top <= bottom)
      {
        for (int i = right; i >= left; i--)
        {
          ans.push_back(matrix[bottom][i]);
        }
        bottom--;
      }
      // traverse bottom to top
      if (left <= right)
      {
        for (int i = bottom; i >= top; i--)
        {
          ans.push_back(matrix[i][left]);
        }
        left++;
      }
    }
    return ans;
  }
};

int main()
{
  vector<vector<int>> matrix = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12},
      {13, 14, 15, 16}};

  Solution sol;

  vector<int> ans = sol.spiralOrder(matrix);

  cout << "Elements in spiral order are: ";
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
  cout << endl;

  return 0;
}

// Time Complexity -> O(n * m) and Space complexity -> O(n * m) to store the result vector 'ans'