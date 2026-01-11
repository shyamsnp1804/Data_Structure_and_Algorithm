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
  cout << st.top() << " ";         // print nothing -> empty stack
}

int main()
{
  explainStack();
  return 0;
}