#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> divisors(int n)
  {
    vector<int> ans;
    for (int i = 1; i <= n; i++)     // Time Complexity: O(N) 
    {
      if (n % i == 0)
      {
        ans.push_back(i);
      }
    }
    return ans;
  }
};

int main()
{
  int n;
  cout << "enter number : ";
  cin >> n;
  Solution sol;
  vector<int> ans = sol.divisors(n);
  for (auto it : ans)
  {
    cout << it << " ";
  }
  return 0;
}