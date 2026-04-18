#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
  // This function checks:
  // Can we allocate books such that no student gets more than maxPages?
  bool canAllocate(vector<int> &nums, int m, int maxPages)
  {
    int students = 1; // start with first student
    int pages = 0;    // pages allocated to current student

    for (int i = 0; i < nums.size(); i++)
    {
      // If current book can be added without exceeding maxPages
      if (pages + nums[i] <= maxPages)
      {
        pages += nums[i]; // give book to same student
      }
      else
      {
        students++;      //  Cannot add book → need a new student
        pages = nums[i]; // assign current book to new student
      }
    }

    // If required students are within limit → possible
    // Else → not possible
    return students <= m;
  }

public:
  int findPages(vector<int> &nums, int m)
  {
    int n = nums.size();

    //  Not enough books for students
    if (m > n)
      return -1;

    // Minimum = largest single book
    int low = *max_element(nums.begin(), nums.end());

    // Maximum = sum of all pages (one student takes all)
    int high = accumulate(nums.begin(), nums.end(), 0);

    int ans = -1;

    // Binary Search on answer (max pages)
    while (low <= high)
    {
      int mid = low + (high - low) / 2;

      // Check if this maxPages (mid) is valid
      if (canAllocate(nums, m, mid))
      {
        ans = mid;      // possible answer
        high = mid - 1; // try to minimize further
      }
      else
      {
        low = mid + 1; // need more pages → increase limit
      }
    }

    return ans;
  }
};

int main()
{
  vector<int> arr = {25, 46, 28, 49, 24};
  int m = 4;

  Solution sol;

  int ans = sol.findPages(arr, m);

  cout << "The answer is: " << ans << "\n";

  return 0;
}