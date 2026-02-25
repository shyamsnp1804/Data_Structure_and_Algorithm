#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool checkPrime(int num)
  {
    if (num <= 1)
    {
      return false;
    }
    return prime(num, 2);
  }

private:
  bool prime(int num, int x)
  {
    if (x > sqrt(num))
    {
      return true;
    }
    if (num % x == 0)
    {
      return false;
    }
    return prime(num, x + 1);
  }
};

int main()
{
  int num;
  cout << "enter number : ";
  cin >> num;
  Solution sol;
  bool ans = sol.checkPrime(num);
  cout << (ans ? "prime" : "not prime") << endl;
  return 0;
}