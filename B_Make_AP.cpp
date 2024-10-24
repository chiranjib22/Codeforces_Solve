#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int a, b, c;
  cin >> a >> b >> c;

  int na = b - (c - b);
  int nb = a + (c - a) / 2;
  int nc = b + (b - a);

  if (na >= a && na % a == 0 && na)
  {
    cout << "YES\n";
    return;
  }

  if (nb >= b && nb % b == 0 && (c - a) % 2 == 0 && nb)
  {
    cout << "YES\n";
    return;
  }

  if (nc >= c && nc % c == 0 && nc)
  {
    cout << "YES\n";
    return;
  }

  cout << "NO\n";
  return;
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