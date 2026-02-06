#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> reverseArray(int arr[], int n)
  {
    vector<int> v(arr, arr + n); // copy array to vector
    reverse(v.begin(), v.end()); // reverse vector
    return v;
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
    cin >> arr[i];

  Solution sol;
  vector<int> ans = sol.reverseArray(arr, n);

  cout << "The reversed array elements are : ";
  for (int x : ans)
    cout << x << " ";

  return 0;
}
