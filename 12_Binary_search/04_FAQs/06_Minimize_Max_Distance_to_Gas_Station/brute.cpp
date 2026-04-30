/* Given a sorted array arr of size n, containing integer positions of n gas stations on the X-axis, and an integer k, place k new gas stations on the X-axis.

The new gas stations can be placed anywhere on the non-negative side of the X-axis, including non-integer positions.

Let dist be the maximum distance between adjacent gas stations after adding the k new gas stations.

Find the minimum value of dist.

Your answer will be accepted if it is within 1e-6 of the true value. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  double minimiseMaxDistance(vector<int> &arr, int k)
  {
    int n = arr.size();

    // Array to store how many gas stations are placed in each section
    vector<int> howMany(n - 1, 0);

    // Place k gas stations
    for (int gasStations = 1; gasStations <= k; gasStations++)
    {
      double maxSection = -1;
      int maxInd = -1;

      // Find the maximum section and insert the gas station
      for (int i = 0; i < n - 1; i++)
      {
        double diff = arr[i + 1] - arr[i];
        double sectionLength = diff / (howMany[i] + 1);

        // Update the maximum section length and its index
        if (sectionLength > maxSection)
        {
          maxSection = sectionLength;
          maxInd = i;
        }
      }
      // Insert the current gas station into the section
      howMany[maxInd]++;
    }

    // Find the maximum distance (answer)
    double maxAns = -1;

    for (int i = 0; i < n - 1; i++)
    {
      double diff = arr[i + 1] - arr[i];
      double sectionLength = diff / (howMany[i] + 1);
      maxAns = max(maxAns, sectionLength);
    }

    return maxAns;
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

// Time Complexity:O(k*N) + O(N) and Space Complexity: O(N-1)