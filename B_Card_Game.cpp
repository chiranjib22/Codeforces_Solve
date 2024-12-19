#include <bits/stdc++.h>

using namespace std;

int result(int a, int b)
{
  if (a > b)
    return 1;
  if (a == b)
    return 0;
  return -1;
}
void solve()
{
  int a1, a2, b1, b2;
  cin >> a1 >> a2 >> b1 >> b2;

  int ans = 0;
  if (result(a1, b1) + result(a2, b2) > 0)
    ans += 1;
  if (result(a2, b2) + result(a1, b1) > 0)
    ans += 1;
  if (result(a1, b2) + result(a2, b1) > 0)
    ans += 1;
  if (result(a2, b1) + result(a1, b2) > 0)
    ans += 1;
  cout << ans << endl;
}

int main()
{
  int t;
  cin >> t;

  while (t--)
    solve();
  return 0;
}