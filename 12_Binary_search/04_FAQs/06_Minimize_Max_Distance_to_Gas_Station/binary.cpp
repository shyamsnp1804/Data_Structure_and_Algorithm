/* Given a sorted array arr of size n, containing integer positions of n gas stations on the X-axis, and an integer k, place k new gas stations on the X-axis.

The new gas stations can be placed anywhere on the non-negative side of the X-axis, including non-integer positions.

Let dist be the maximum distance between adjacent gas stations after adding the k new gas stations.

Find the minimum value of dist.

Your answer will be accepted if it is within 1e-6 of the true value. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
  // calculate minimum number of gas stations required
  // so that every gap ≤ dist ho jaye
  int numberOfGasStationsRequired(long double dist, vector<int> &arr)
  {
    int n = arr.size();
    int cnt = 0; // total stations required

    for (int i = 1; i < n; i++)
    {
      // current gap between two stations
      int gap = arr[i] - arr[i - 1];

      int requiredStations = (int)(gap / dist);

      // fix for exact division case
      // example: gap = 6, dist = 3
      // gap/dist = 2 but only 1 station needed

      if (gap == dist * requiredStations)
      {
        requiredStations--;
      }

      // add to total
      cnt += requiredStations;
    }

    return cnt; // total stations required for this dist
  }

public:
  long double minimiseMaxDistance(vector<int> &arr, int k)
  {
    int n = arr.size();

    // Binary search space
    long double low = 0;  // minimum possible distance
    long double high = 0; // maximum possible distance

    // find maximum gap (upper bound of answer)
    for (int i = 0; i < n - 1; i++)
    {
      high = max(high, (long double)(arr[i + 1] - arr[i]));
    }

    // precision (since answer is decimal)
    long double diff = 1e-6;

    // binary search on answer
    while (high - low > diff)
    {

      // mid = candidate maximum distance
      long double mid = (low + high) / 2.0;

      // check how many stations needed for this mid
      int cnt = numberOfGasStationsRequired(mid, arr);

      if (cnt > k)
      {
        // too many stations needed → mid too small
        // increase distance
        low = mid;
      }
      else
      {
        // possible with ≤ k stations
        // try smaller distance
        high = mid;
      }
    }

    // smallest possible max distance
    return high;
  }
};

int main()
{
  vector<int> arr = {1, 13, 17, 23};
  int k = 4;

  Solution sol;

  long double ans = sol.minimiseMaxDistance(arr, k);
  cout << "The answer is: " << ans << "\n";

  return 0;
}

// T.C-> O(n * log(maxGap / 1e-6)) and S.C-> O(1)