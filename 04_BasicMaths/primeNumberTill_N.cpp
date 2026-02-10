#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool isPrime(int n)
  {
    if (n <= 1)
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

  cout << "Prime numbers till " << n << " are:\n";
  for (int i = 2; i <= n; i++)
  {
    if (sol.isPrime(i))
      cout << i << " ";
  }

  return 0;
}
