#include <bits/stdc++.h>
using namespace std;

void explainStack()
{
  stack<int> st, st2, st3;
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
  cout << "elements of st are -> ";
  while (st.empty() == false)
  {
    cout << st.top() << " ";
    st.pop();
  }
  cout << endl;
  st2.push(12);
  st2.push(14);
  st2.push(16);
  st2.push(18);
  st2.push(20);

  st3.push(13);
  st3.push(15);
  st3.push(17);
  st3.push(19);
  st3.push(30);

  // swap
  st3.swap(st2);
  cout << "Top element of st2 after swap: " << st2.top() << endl;
  cout << "Top element of st3 after swap: " << st3.top() << endl;

  // size
  cout << "Size of st: " << st.size() << endl;
  cout << "Size of st2: " << st2.size() << endl;
  cout << "Size of st3: " << st3.size() << endl;

  // empty
  cout << "Is st empty? " << (st.empty() ? "yes" : "no") << endl;
  cout << "Is st2 empty? " << (st2.empty() ? "yes" : "no") << endl;
  cout << "Is st3 empty? " << (st3.empty() ? "yes" : "no") << endl;
}

int main()
{
  explainStack();
  return 0;
}