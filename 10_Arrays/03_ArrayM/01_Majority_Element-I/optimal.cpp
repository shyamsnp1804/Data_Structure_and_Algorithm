#include <bits/stdc++.h>
using namespace std;

/*
    Moore’s Voting Algorithm

    Goal:
    Find element that appears more than n/2 times (majority element)

    Idea:
    - Same elements increase count
    - Different elements cancel each other
    - The majority element will always survive this cancellation
*/

class Solution
{
public:
  int majorityElement(vector<int> &nums)
  {
    int n = nums.size();

    int cnt = 0; // Counter (tracks balance of elements)
    int el;      // Candidate for majority element

    for (int i = 0; i < n; i++)
    {
      // If count becomes 0, choose new candidate
      if (cnt == 0)
      {
        el = nums[i]; // Pick current element
        cnt = 1;      // Reset count
      }
      // If same element, increase count
      else if (el == nums[i])
      {
        cnt++;
      }
      // If different element, decrease count
      else
      {
        cnt--;
      }
    }

    // Count how many times el actually appears
    int cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
      if (nums[i] == el)
      {
        cnt1++;
      }
    }
    // If element appears more than n/2 → it's majority
    if (cnt1 > (n / 2))
    {
      return el;
    }
    return -1; // no majority
  }
};

int main()
{
  vector<int> arr = {2, 2, 1, 1, 1, 2, 2};

  Solution sol;

  int ans = sol.majorityElement(arr);

  cout << "The majority element is: " << ans << endl;

  return 0;
}

// Time Complexity: O(N) and Space Complexity: O(1)