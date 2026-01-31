#include <bits/stdc++.h>
using namespace std;

void explainPow()
{
  // The `pow` function, found in the <cmath> library, raises a base number to the power of an exponent.

  double base = 2.0, exp = 3.0;
  double result = pow(base, exp);
  cout << "2^3 = " << result;
}

int main()
{
  explainPow();
  return 0;
}