#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool isSorted(int arr[], int n)
  {
    for (int i = 0; i < n - 1; i++) // taking i<(n-1) not i<(n) because when i=n-1 then arr[n] invalid index
    {
      if (arr[i] > arr[i + 1])
        return false;
    }
    return true;
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
  bool ans = sol.isSorted(arr, n);
  if (ans)
    cout << "Array is sorted";
  else
    cout << "Array is not sorted";
  return 0;
}