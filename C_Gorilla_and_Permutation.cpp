#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int n, m, k;
  cin >> n >> m >> k;

  for (int i = n; i >= 1; i--)
  {
    if (i <= m)
    {
      cout << (m + 1) - i;
      if (i != 1)
        cout << " ";
    }
    else
      cout << i << " ";
  }
  cout << endl;
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