#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
  unsigned long long ans = 0;
  unsigned long long x, y, a, b, t;
  cin >> x >> y >> a >> b;

  b = min(a + a, b);

  if (x < y)
  {
    t = x;
    x = y;
    y = t;
  }
  ans = (x - y) * a + y * b;
  cout << ans << endl;
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