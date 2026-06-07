#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x = 10;
  // Declare a pointer and assign it the address of x
  int *ptr = &x;

  // Print the value of x and the address of x
  cout << "Value of x: " << x << endl;
  cout << "Address of x: " << &x << endl;

  // Print the value stored in ptr and the value pointed to by ptr
  cout << "Value stored in ptr (address of x): " << ptr << endl;
  cout << "Value pointed to by ptr: " << *ptr << endl;

  // Modify the value of x using the pointer
  *ptr = 20;

  // Print the new value of x
  cout << "New value of x after modification: " << x << endl;

  return 0;
}
