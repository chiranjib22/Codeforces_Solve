#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int n, k;
  cin >> n >> k;

  string s;
  cin >> s;

  map<char, int> m;
  for (int i = 0; i < s.length(); i++)
  {
    m[s[i]]++;
  }

  int oddOccurrence = 0;
  for (auto u : m)
  {
    if (u.second % 2 != 0)
      oddOccurrence++;
  }

  oddOccurrence -= k;
  if (oddOccurrence < 2)
    cout << "YES\n";
  else
    cout << "NO\n";
  return;
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    solve();
  }
  return 0;
}