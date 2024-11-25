#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int n;
  cin >> n;
  vector<pair<int, int>> v;
  // taking (room, th second)
  for (int i = 0; i < n; i++)
  {
    int x, y;
    cin >> x >> y;
    v.push_back(make_pair(x, y));
  }

  int ans = INT_MAX;
  for (auto u : v)
  {
    int temp = 0;
    if (u.second % 2 == 0)
      temp = u.first + (u.second - 2) / 2;
    else
      temp = u.first + u.second / 2;
    ans = min(ans, temp);
  }

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