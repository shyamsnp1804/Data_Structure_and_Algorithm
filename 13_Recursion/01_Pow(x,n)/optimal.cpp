#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
  double power(double x, long long n)
  {
    // Base case: anything raised to 0 is 1
    if (n == 0)
      return 1.0;

    // Base case: anything raised to 1 is itself
    if (n == 1)
      return x;

    if (n % 2 == 0)
    {
      return power(x * x, n / 2);
    }
    return x * power(x, n - 1);
  }

public:
  double myPow(double x, int n)
  {
    long long num = n;

    if (num < 0)
    {
      return (1.0 / power(x, -num));
    }
    return power(x, num);
  }
};

int main()
{
  Solution sol;
  cout << sol.myPow(2.0, 10) << endl;
  return 0;
}
