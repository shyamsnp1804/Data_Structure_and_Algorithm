#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
  // Comparator to sort by frequency (descending) and alphabetically (ascending)
  static bool comparator(pair<int, char> p1, pair<int, char> p2)
  {
    if (p1.first > p2.first)
      return true;
    if (p1.first < p2.first)
      return false;
    return p1.second == p2.second;
  }

public:
  vector<char> frequencySort(string &s)
  {
    // initialize frequency array
    pair<int, char> freq[26];
    for (int i = 0; i < 26; i++)
    {
      freq[i] = {0, i + 'a'};
    }

    // count frequency
    for (auto ch : s)
    {
      freq[ch - 'a'].first++;
    }

    // sort using custom comparator
    sort(freq, freq + 26, comparator);

    //  Collect characters with non-zero frequency
    vector<char> ans;
    for (int i = 0; i < 26; i++)
    {
      if (freq[i].first > 0)
        ans.push_back(freq[i].second);
    }
    return ans;
  }
};

int main()
{
  string s = "tree";
  Solution sol;
  vector<char> result = sol.frequencySort(s);
  for (auto it : result)
  {
    cout << it << " ";
  }
  return 0;
}