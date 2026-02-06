#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int countOdd(int arr[], int n)
  {
    int count = 0;
    for (int i = 0; i < n; i++)
    {
      if (arr[i] % 2 == 1)
        count++;
    }
    return count;
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
  int ans = sol.countOdd(arr, n);
  cout << "Count of odd numbers : " << ans;
  return 0;
}