#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int n, H, M;
  int h, m;
  int t;
  cin >> n >> H >> M;
  int time = H * 60 + M;
  int ans = 24 * 60;
  while (n--)
  {
    cin >> h >> m;
    t = h * 60 + m - time;
    if (t < 0)
      t += 24 * 60;
    ans = min(ans, t);
  }
  cout << ans / 60 << " " << ans % 60 << endl;
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