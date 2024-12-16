#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int a, b, c, x, y;

  cin >> a >> b >> c >> x >> y;

  if ((x - a) > 0)
  {
    x = x - a;
    a = 0;
  }
  else
  {
    x = 0;
  }
  if ((y - b) > 0)
  {
    y = y - b;
    b = 0;
  }
  else
  {
    y = 0;
  }
  if (x + y <= c)
  {
    cout << "YES\n";
  }
  else
  {
    cout << "NO\n";
  }
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