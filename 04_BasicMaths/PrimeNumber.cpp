#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool isPrime(int n)
  {
    if (n == 1)
      return false;

    for (int i = 2; i * i <= n; i++)
    {
      if (n % i == 0)
        return false;
    }
    return true;
  }
};

int main()
{
  int n;
  cout << "enter number : ";
  cin >> n;

  Solution sol;
  bool ans = sol.isPrime(n);
  if (ans)
    cout << n << " is a prime number";
  else
    cout << n << " is not a prime number";
  return 0;
}