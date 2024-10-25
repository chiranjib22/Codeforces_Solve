#include <bits/stdc++.h>

using namespace std;

void solve()
{
  string s;
  cin >> s;

  int count = 0;
  int i = 0;
  int size = s.length();
  int changedSize = 0;
  while (size != changedSize)
  {
    while (i < size - 1)
    {
      if (s[i] != s[i + 1])
      {
        count++;
        auto first = s.begin() + i;
        s.erase(first, first + 2);
        size = s.length();
        i = 0;
      }
      else
        i++;
    }
    changedSize = s.length();
  }
  if (count % 2 == 0)
    cout << "NET\n";
  else
    cout << "DA\n";
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