#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  map<string, int> m;

  while (n--)
  {
    string s;
    cin >> s;
    m[s]++;
  }

  int score = 0;
  string win;
  for (auto u : m)
  {
    if (score < u.second)
    {
      score = u.second;
      win = u.first;
    }
  }
  cout << win << endl;
  return 0;
}