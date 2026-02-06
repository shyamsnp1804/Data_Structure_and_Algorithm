#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int sum(int arr[], int n)
  {
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
      sum = sum + arr[i];
    }
    return sum;
  }
};
int main()
{
  int n;
  cout << "enter size of an array : ";
  cin >> n;
  int arr[n];
  cout << "enter elements of array : ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  Solution sol;
  int ans = sol.sum(arr, n);
  cout << "The sum of array elements is : " << ans;
  return 0;
}