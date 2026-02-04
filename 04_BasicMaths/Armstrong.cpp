#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
  int countDigit(int n)
  {
    int count = log10(n) + 1;
    return count;
  }

public:
  bool isArmstrong(int n)
  {
    int sum = 0;
    int count = countDigit(n);
    int dupNum = n;
    while (n > 0)
    {
      int lastDigit = n % 10;
      sum = sum + pow(lastDigit, count);
      n = n / 10;
    }
    if (sum == dupNum)
      return true;
    else
      return false;
  }
};

int main()
{
  int n;
  cout << "enter number : ";
  cin >> n;
  Solution sol;
  int ans = sol.isArmstrong(n);
  if (ans)
    cout << "The given number is an Armstrong";
  else
    cout << "The given number is not an Armstrong";
  return 0;
}