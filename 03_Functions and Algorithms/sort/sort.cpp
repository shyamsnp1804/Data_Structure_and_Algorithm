#include <bits/stdc++.h>
using namespace std;

void explainSort()
{
  // array

  // sort all element
  int arr[5] = {5, 7, 9, 4, 6};

  sort(arr, arr + 5);
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " "; // output -> 4 5 6 7 9
  }
  cout << endl;

  // sort specific element
  int arr1[5] = {5, 7, 9, 4, 6};

  sort(arr1 + 1, arr1 + 4);
  for (int i = 0; i < 5; i++)
  {
    cout << arr1[i] << " "; // output -> 5 4 7 9 6
  }
  cout << endl;

  // vector

  // sort all element
  vector<int> vec = {5, 7, 9, 4, 6};
  sort(vec.begin(), vec.end());

  for (auto i : vec)
  {
    cout << i << " "; // output -> 4 5 6 7 9
  }
  cout << endl;

  // sort specific element
  vector<int> vec2 = {5, 7, 9, 4, 6};
  sort(vec2.begin() + 1, vec2.begin() + 4);

  for (auto i : vec2)
  {
    cout << i << " "; // output -> 5 4 7 9 6
  }
}

int main()
{
  explainSort();
  return 0;
}