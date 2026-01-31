#include <bits/stdc++.h>
using namespace std;

void explainAccumulate()
{
  // array

  // sum of all element
  int arr[5] = {5, 7, 9, 4, 6};

  cout << accumulate(arr, arr + 5, 0);

  cout << endl;

  // sum of specific element
  int arr1[5] = {5, 7, 9, 4, 6};

  cout << accumulate(arr1 + 1, arr1 + 4, 1);

  cout << endl;

  // vector

  // sum of all element
  vector<int> vec = {5, 7, 9, 4, 6};
  cout << accumulate(vec.begin(), vec.end(), 0);

  cout << endl;

  // sum of specific element
  vector<int> vec2 = {5, 7, 9, 4, 6};
  cout << accumulate(vec2.begin() + 1, vec2.begin() + 4, 1);
}

int main()
{
  explainAccumulate();
  return 0;
}