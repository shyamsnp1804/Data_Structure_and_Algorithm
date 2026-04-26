/* Given two sorted arrays arr1 and arr2 of size m and n respectively, return the median of the two sorted arrays.

The median is defined as the middle value of a sorted list of numbers. In case the length of the list is even, the median is the average of the two middle elements. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  double median(vector<int> &arr1, vector<int> &arr2)
  {
    int n1 = arr1.size();
    int n2 = arr2.size();

    vector<int> merged;

    int i = 0, j = 0;

    while (i < n1 && j < n2)
    {
      if (arr1[i] < arr2[j])
        merged.push_back(arr1[i++]);
      else
        merged.push_back(arr2[j++]);
    }
    while (i < n1)
      merged.push_back(arr1[i++]);
    while (j < n2)
      merged.push_back(arr2[j++]);

    int n = n1 + n2;

    if (n % 2 == 1)
    {
      return (double)merged[n / 2];
    }
    double median = ((double)merged[n / 2] + (double)merged[n / 2 - 1]) / 2.0;
    return median;
  }
};

int main()
{
  vector<int> arr1 = {1, 3};
  vector<int> arr2 = {2, 4};

  Solution obj;

  double result = obj.median(arr1, arr2);

  cout << "Median is: " << setprecision(1) << result << endl;

  return 0;
}

// T.C-> O(n1+n2)	and S.C-> O(n1+n2)