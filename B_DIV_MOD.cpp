#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int l, r, a;

  cin >> l >> r >> a;

  int x, ans1, ans2;
  if (a == 1)
    cout << r << endl;
  else
  {
    if (r - (r % a) - 1 >= l)
      x = r - (r % a) - 1;
    else
      x = r;

    ans1 = (x / a) + (x % a);
    ans2 = (r / a) + (r % a);
    cout << max(ans1, ans2) << endl;
  }
}

int main()
{
  int t;
  cin >> t;

  while (t--)
    solve();
  return 0;
}