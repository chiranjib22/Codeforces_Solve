#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int n;
  cin >> n;
  int a;
  cin >> a;
  int ans = a;

  for (int i = 1; i < n; i++)
  {
    cin >> a;
    ans &= a;
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