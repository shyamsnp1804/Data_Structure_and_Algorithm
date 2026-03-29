/* Given an integer array nums. Return the number of reverse pairs in the array.
An index pair (i, j) is called a reverse pair if:

0 <= i < j < nums.length

nums[i] > 2 * nums[j] */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
  // merge function: now returns reverse pair count
  void merge(vector<int> &arr, int low, int mid, int high)
  {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    long long cnt = 0; // to count reverse pair

    // Merge both halves
    while (left <= mid && right <= high)
    {

      if (arr[left] <= arr[right])
      {
        temp.push_back(arr[left]);
        left++;
      }
      else
      {
        temp.push_back(arr[right]);

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
  }

private:
  int countPairs(vector<int> &nums, int low, int mid, int high)
  {
    int right = mid + 1;
    int cnt = 0;

    for (int i = low; i <= mid; i++)
    {
      while (right <= high && (long long)nums[i] > 2LL * nums[right])
      {
        right++;
      }
      cnt += (right - (mid + 1));
    }
    return cnt;
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

    cnt += countPairs(arr, low, mid, high);

    merge(arr, low, mid, high);

    return cnt; // total inversions
  }

public:
  // Main function: returns reverse pairs count
  long long CountreversePairs(vector<int> &nums)
  {
    int n = nums.size();

    return mergeSortHelper(nums, 0, n - 1);
  }
};

int main()
{
  vector<int> arr = {40, 25, 19, 12, 9, 6, 2};

  Solution sol;

  long long reversePair = sol.CountreversePairs(arr);

  cout << "Number of reverse pair: " << reversePair << endl;

  return 0;
}

// T.C -> O(n log n)  and S.C -> O(n)