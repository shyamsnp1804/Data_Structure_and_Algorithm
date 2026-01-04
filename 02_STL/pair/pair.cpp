#include <bits/stdc++.h>
using namespace std;

void explainPair()
{

  pair<int, int> pr1 = make_pair(2, 8);
  cout << pr1.first << " " << pr1.second << endl;

  pair<int, char> pr2 = make_pair(3, 'a');
  cout << pr2.first << " " << pr2.second << endl;

  pair<pair<int, char>, int> pr3 = {{4, 'b'}, 8};
  cout << pr3.first.first << " " << pr3.first.second << " " << pr3.second << endl;
}

int main()
{
  explainPair();
  return 0;
}