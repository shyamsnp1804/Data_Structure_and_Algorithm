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

  int countPrime(int n)
  {
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
      if (isPrime(i))
        count++;
    }
    return count;
  }
};

int main()
{
  int n;
  cout << "enter number : ";
  cin >> n;

  Solution sol;
  int ans = sol.countPrime(n);
  cout << "number of prime number till " << n << " is " << ans;
  return 0;
}