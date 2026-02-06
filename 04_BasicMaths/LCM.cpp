#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  int GCD(int n1, int n2)
  {

    while (n1 != 0 && n2 != 0)
      if (n1 > n2)
      {
        n1 = n1 % n2;
      }
      else
      {
        n2 = n2 % n1;
      }
    if (n2 == 0)
      return n1;
    return n2;
  }

public:
  int LCM(int n1, int n2)
  {
    int gcd = GCD(n1, n2);
    int lcm = n1 * n2 / gcd;
    return lcm;
  }
};

int main()
{
  int n1, n2;
  cout << "enter n1 : ";
  cin >> n1;
  cout << "enter n2 : ";
  cin >> n2;
  Solution sol;
  int ans = sol.LCM(n1, n2);
  cout << "The LCM of" << n1 << " and " << n2 << " is: " << ans;
  return 0;
}