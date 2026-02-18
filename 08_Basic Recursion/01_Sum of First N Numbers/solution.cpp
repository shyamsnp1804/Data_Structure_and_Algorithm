#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int NnumbersSum(int N)
  {
    if (N == 0)
      return 0;
    return N + NnumbersSum(N - 1);
  }
};

int main()
{
  Solution solution;
  int N = 10;
  cout << "Sum of first " << N << " numbers is " << solution.NnumbersSum(N) << endl;
  return 0;
}