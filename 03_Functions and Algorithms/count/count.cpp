#include <bits/stdc++.h>
using namespace std;

void explainCount()
{
  // array
  int arr[5] = {5, 7, 9, 4, 7};
  int cntArr = count(arr, arr + 5, 7);
  cout << "Count of 7: " << cntArr;
  cout << endl;

  // vector
  vector<int> v = {1, 2, 3, 1, 2, 1};
  int cnt = count(v.begin(), v.end(), 1);
  cout << "Count of 1: " << cnt;
}

int main()
{
  explainCount();
  return 0;
}