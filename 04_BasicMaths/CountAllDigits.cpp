#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int countDigit(int n)
  {
    if (n == 0)
      return 1;

    // int count = 0;
    // while (n > 0)
    // {
    //   n = n / 10;
    //   count = count + 1;   // T.C -> O(log10(N))  and S.C -> O(1)
    // }

    int count = log10(n) + 1; // T.C -> O(1) and S.C -> O(1)
    return count;
  }
};

int main()
{
  cout << "enter number : ";
  int n;
  cin >> n;

  Solution sol;
  int ans = sol.countDigit(n);
  cout << "The count of digits in the given number is: " << ans;
  return 0;
}