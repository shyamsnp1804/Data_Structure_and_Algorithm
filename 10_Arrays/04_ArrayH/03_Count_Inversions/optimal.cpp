/* Given an integer array nums. Return the number of inversions in the array.

Two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

It indicates how close an array is to being sorted.
A sorted array has an inversion count of 0.
An array sorted in descending order has maximum inversion. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  // merge function: now returns inversion count
  long long merge(vector<int> &arr, int low, int mid, int high)
  {

    vector<int> temp;
    int left = low;
    int right = mid + 1;

    long long cnt = 0; // to count inversions

    // Merge both halves
    while (left <= mid && right <= high)
    {

      // If left element is smaller → no inversion
      if (arr[left] <= arr[right])
      {
        temp.push_back(arr[left]);
        left++;
      }
      else
      {
        // Inversion case
        temp.push_back(arr[right]);

        //  IMPORTANT:
        // All elements from left → mid are greater than arr[right]
        cnt += (mid - left + 1);

        right++;
      }
    }

    // Copy remaining elements of left half
    while (left <= mid)
    {
      temp.push_back(arr[left]);
      left++;
    }

    // Copy remaining elements of right half
    while (right <= high)
    {
      temp.push_back(arr[right]);
      right++;
    }

    // Copy back to original array
    for (int i = low; i <= high; i++)
    {
      arr[i] = temp[i - low];
    }

    return cnt; // inversion count
  }

  // mergeSortHelper: now returns inversion count
  long long mergeSortHelper(vector<int> &arr, int low, int high)
  {

    long long cnt = 0;

    // Base case
    if (low >= high)
      return 0;

    int mid = (low + high) / 2;

    // Count inversions in left half
    cnt += mergeSortHelper(arr, low, mid);

    // Count inversions in right half
    cnt += mergeSortHelper(arr, mid + 1, high);

    // Count cross inversions during merge
    cnt += merge(arr, low, mid, high);

    return cnt; // total inversions
  }

  // Main function: returns inversion count
  long long countInversions(vector<int> &nums)
  {
    int n = nums.size();

    return mergeSortHelper(nums, 0, n - 1);
  }
};

int main()
{
  vector<int> arr = {9, 4, 7, 6, 3, 1, 5};

  Solution sol;

  long long inversions = sol.countInversions(arr);

  cout << "Number of Inversions: " << inversions << endl;

  return 0;
}

// T.C -> O(n log n)  and S.C -> O(n)