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

    if (k < 1 || k > merged.size())
    {
      return -1;
    }
    return merged[k - 1];
  }
};

int main()
{
  vector<int> arr1 = {1, 3};
  vector<int> arr2 = {2, 4};

  int k = 5;

  Solution obj;

  int result = obj.KthElement(arr1, arr2, k);

  cout << result << endl;

  return 0;
}

// T.C-> O(n1+n2)	and S.C-> O(n1+n2)