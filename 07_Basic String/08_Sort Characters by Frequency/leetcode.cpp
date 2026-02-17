#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
  static bool comparator(pair<int, char> p1, pair<int, char> p2)
  {
    if (p1.first > p2.first) // frequency of p1>p2 so p1 comes before p2
      return true;
    if (p1.first < p2.first) // frequency of p1<p2 so p1 comes after p2
      return false;
    return p1.second == p2.second; // if frequency of p1==p2 sort alphabetically(ascending)
  }

public:
  string frequencySort(string &s)
  {
    // initialize frequency array
    pair<int, char> freq[128];
    for (int i = 0; i < 128; i++)
    {
      freq[i] = {0, char(i)};
    }
    // count frequency
    for (auto ch : s)
    {
      freq[ch].first++;
    }
    // sort using custom comparator
    sort(freq, freq + 128, comparator);
    // build output/fullstring
    string ans = "";
    for (int i = 0; i < 128; i++)
    {
      if (freq[i].first > 0)
      {
        ans += string(freq[i].first, freq[i].second);
      }
    }
    return ans;
  }
};

int main()
{
  string s = "tree";
  Solution sol;
  string result = sol.frequencySort(s);
  for (auto it : result)
  {
    cout << it << " ";
  }
  return 0;
}