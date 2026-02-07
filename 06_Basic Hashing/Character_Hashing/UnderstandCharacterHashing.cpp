#include <bits/stdc++.h>
using namespace std;

int main()
{
  char arr[] = {'a', 'c', 'a', 'c', 'd', 'a'}; // a-z -> 97-122 in ASCII
  int hashTable[26] = {0};

  int n = sizeof(arr) / sizeof(arr[0]);

  // count frequency
  for (int i = 0; i < n; i++)
  {
    hashTable[arr[i] - 'a']++; // it actually does ASCII(arr[i]) - ASCII('a')
  }

  // print frequency
  for (int i = 0; i < n; i++)
  {
    if (hashTable[i] > 0) // “Print only those characters that actually appeared.”
    {
      cout << char(i + 'a') << " -> " << hashTable[i] << endl;
    }
  }
  return 0;
}

/*
rem - for capital A-Z replace small a-z and the remaining process is same
also Capital A-Z  ->  65-90 in ASCII
*/