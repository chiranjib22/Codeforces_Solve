#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int x;
  cin >> x;

  string s = "";

  int i = 9;
  int y = x;
  while (i > 0)
  {
    if (i <= y)
    {
      y -= i;
      s += (48 + i);
    }
    i--;
  }
  if (y == 0)
  {
    reverse(s.begin(), s.end());
    cout << s << endl;
  }
  else
    cout << -1 << endl;
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