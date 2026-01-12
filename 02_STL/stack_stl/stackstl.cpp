#include <bits/stdc++.h>
using namespace std;

void explainStack()
{
  stack<int> st;
  st.push(4);
  st.push(7);
  cout << st.top() << " " << endl; // print 7
  st.pop();                        // deletes 7 from top of the stack
  cout << st.top() << " " << endl; // print 4
  st.pop();                        // deletes 4 from stack
  // cout << st.top() << " " << endl; // print nothing -> empty stack => causes undefined behavior and next line of code will not be executed

  st.push(1);
  st.push(3);
  st.push(5);
  st.push(7);
  st.push(11);
  // printing top element and poping element
  while (st.empty() == false)
  {
    cout << st.top() << " ";
    st.pop();
  }
}

int main()
{
  explainStack();
  return 0;
}