#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  int factorial(int n)
  {
    int answer = 1;

    for (int i = 1; i <= n; i++)
    {
      answer = answer * i;
    }
    return answer;
  }
};

int main()
{
  int n;
  cout << "enter number : ";
  cin >> n;
  Solution sol;
  int ans = sol.factorial(n);
  cout << "The factorial of number is: " << ans;
  return 0;
}