#include <bits/stdc++.h>
using namespace std;

void explainVector()
{
  vector<int> vec = {4, 5, 6, 7, 8};
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

  // reverse iterator
  auto reverseBegin = vec.rbegin(); // rbegin() give location of last element
  auto reverseEnd = vec.rend();     // rend() give location just before first element
  cout << "elements in reverse order - > ";
  for (auto i = reverseBegin; i < reverseEnd; i++)
  {
    cout << *i << " ";
  }
  cout << endl;

  // printing element from and to specific index
  vector<int> dupVec(vec.begin() + 1, vec.end() - 1); // remember-> vec.begin() include first element and vec.end() exclude the last element because c++ iterators ranges are : [first , last) means include first and exclude last element
  for (auto i : dupVec)
  {
    cout << i << " ";
  }
  cout << endl;

  // front
  cout << "front element is -> " << vec.front() << endl;

  // back
  cout << "last element is -> " << vec.back() << endl;

  // pop_back
  vec.pop_back(); // pop last element
  cout << "last element after pop_back is -> " << vec.back() << endl;

  // erase -> we can use it to remove specific element from vector or also delete in range
  vec.erase(vec.begin() + 1, vec.end() - 1);
  for (auto i : vec)
  {
    cout << i << " ";
  }
  cout << endl;
  // clear-> The clear function removes all elements from the vector, making it empty.
  vec.clear();

  cout << "size of vector -> " << vec.size() << endl;

  // insert
  vector<int> vec2 = {11, 22, 33, 44};
  vec2.insert(vec2.begin(), 10);
  cout << "element of vec2 after insertion -> ";
  for (auto i : vec2)
  {
    cout << i << " ";
  }
  cout << endl;

  // swap
  vector<int> vec3 = {10, 20};
  vector<int> vec4 = {30, 40};
  swap(vec3, vec4);
  cout << "after swapping vec3 elements are -> ";
  for (auto i : vec3)
  {
    cout << i << " ";
  }
  cout << endl;
  cout << "after swapping vec3 elements are -> ";
  for (auto i : vec4)
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