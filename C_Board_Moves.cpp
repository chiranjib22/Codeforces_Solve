#include <bits/stdc++.h>

using namespace std;

void solve()
{
  long long n;
  cin >> n;

  long long ans = 0;
  for (long long i = 0, j = 1; j <= n; i++, j += 2)
  {
    ans += (j * j - (j - 2) * (j - 2)) * i;
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