#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >> n;
  int a;
  string s = "";
  map<char, int> m;

  char x = 'a';
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    if (a == 0)
    {
      s += x;
      // cout << a << x << endl;
      m.insert({x, 1});
      x++;
    }
    else
    {
      for (auto u : m)
      {
        if (u.second == a)
        {
          s += u.first;
          m[u.first]++;
          break;
        }
      }
    }
  }
  cout << s << endl;
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