#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  double median(vector<int> &arr1, vector<int> &arr2)
  {
    int n1 = arr1.size(), n2 = arr2.size();

    if (n1 > n2)
      return median(arr2, arr1);

    int n = n1 + n2;

    int left = (n + 1) / 2;

    int low = 0, high = n1;

    while (low <= high)
    {
      int mid1 = low + (high - low) / 2; // number of elements from arr1 into left half
      int mid2 = left - mid1;            // number of elements from arr2 into left half

      int l1 = (mid1 > 0) ? arr1[mid1 - 1] : INT_MIN; // Last element on left side of arr1
      int r1 = (mid1 < n1) ? arr1[mid1] : INT_MAX;    // First element on right side of arr1

      int l2 = (mid2 > 0) ? arr2[mid2 - 1] : INT_MIN; // Last element on left side of arr2
      int r2 = (mid2 < n2) ? arr2[mid2] : INT_MAX;    // First element on right side of arr2

      if (l1 <= r2 && l2 <= r1)
      {
        if (n % 2 == 1)
          return max(l1, l2); // If odd
        else
          return (max(l1, l2) + min(r1, r2)) / 2.0; // If even
      }
      else if (l1 > r2) // If partition is wrong → adjust
      {
        high = mid1 - 1; // l1 > r2
      }
      else
      {
        low = mid1 + 1; // l2 > r1
      }
    }
    return 0; // dummy
  }
};

int main()
{
  vector<int> arr1 = {1, 3};
  vector<int> arr2 = {2, 4};

  Solution sol;

  cout << "The median of two sorted arrays is " << fixed << setprecision(1)
       << sol.median(arr1, arr2) << '\n';

  return 0;
}

/* Time Complexity: O(log(min(N1,N2))), where N1 and N2 are the sizes of two given arrays. As, binary search is being applied on the range [0, min(N1, N2)]

Space Complexity: As no additional space is used, so the Space Complexity is O(1). */