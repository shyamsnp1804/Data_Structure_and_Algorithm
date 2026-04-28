/* Given two sorted arrays a and b of size m and n respectively. Find the kth element of the final sorted array. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int KthElement(vector<int> &arr1, vector<int> &arr2, int k)
  {
    int n1 = arr1.size();
    int n2 = arr2.size();

    if (n1 > n2)
      return KthElement(arr2, arr1, k);

    int left = k;

    int low = max(k - n2, 0), high = min(k, n1);

    while (low <= high)
    {
      int mid1 = low + (high - low) / 2;
      int mid2 = left - mid1;

      int l1 = (mid1 > 0) ? arr1[mid1 - 1] : INT_MIN;
      int r1 = (mid1 < n1) ? arr1[mid1] : INT_MAX;

      int l2 = (mid2 > 0) ? arr2[mid2 - 1] : INT_MIN;
      int r2 = (mid2 < n2) ? arr2[mid2] : INT_MAX;

      if (l1 <= r2 && l2 <= r1)
      {
        return max(l1, l2);
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
    return -1;
  }
};

int main()
{
  vector<int> arr1 = {1, 3};
  vector<int> arr2 = {2, 4};

  int k = 4;

  Solution obj;

  int result = obj.KthElement(arr1, arr2, k);

  cout << result << endl;

  return 0;
}

// T.C-> O(log(min(n1, n2))) and SC = O(1)