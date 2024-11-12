#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int n;
  cin >> n;
  string str;
  cin >> str;

  int ans = 0;
  int same = 0;

  for (int i = 0; i < n; i++)
  {
    same++;
    if (i == n - 1 || str[i] != str[i + 1])
    {
      ans = max(ans, same);
      same = 0;
    }
  }
  cout << ans + 1 << endl;
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