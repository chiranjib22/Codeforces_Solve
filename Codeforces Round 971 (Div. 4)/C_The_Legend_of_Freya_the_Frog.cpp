#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int x, y, k;

  cin >> x >> y >> k;

  int ans = 2 * max((x + k - 1) / k, (y + k - 1) / k);
  if ((x + k - 1) / k > (y + k - 1) / k)
    ans--;
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