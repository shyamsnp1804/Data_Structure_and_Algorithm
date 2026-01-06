#include <bits/stdc++.h>
using namespace std;

void explainVector()
{
  vector<int> vec;
  vec.push_back(3); // push_back() inserts element in vector
  vec.push_back(2);
  vec.push_back(1);
  vec.emplace_back(0); // you can also use emplace_back() to insert element in vector
  cout << "size of vector is -> " << vec.size() << endl;

  // vector also store elements in same manner as array i.e, 0 based indexing -> [3,2,1,0]
  // print vector elements
  // for (int i = 0; i < vec.size(); i++)
  // {
  //   cout << "vector elements are -> " << vec[i] << " ";
  // }
  // cout << endl;

  // // iterator
  // vector<int>::iterator beginItr = vec.begin(); //.begin() gives reference to memory location where 1st element stored
  // cout << "1st element is -> " << *beginItr << endl;

  // vector<int>::iterator endItr = vec.end(); // .end() gives reference to memory location after end element not of end element
  // // print vector elements
  // for (vector<int>::iterator i = beginItr; i < endItr; i++)
  // {
  //   cout << "vector elements are -> " << *i << " ";
  // }
  // cout << endl;

  // print vector elements
  // auto beginItr = vec.begin(); // instead of 'vector<int>::iterator' you can use 'auto' which  automatically assign the datatype
  // auto endItr = vec.end();
  // cout << "vector elements are -> ";
  // for (auto i = beginItr; i < endItr; i++)
  // {
  //   cout << *i << " ";
  // }

  // print vector elements
  cout << "vector elements are -> ";
  for (auto i : vec)
  {
    cout << i << " ";
  }
  cout << endl;
}
int main()
{
  explainVector();
  return 0;
}