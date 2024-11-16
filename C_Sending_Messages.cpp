#include <bits/stdc++.h>

using namespace std;

void solve()
{
  long long n, f, a, b;
  long long x;
  cin >> n >> f >> a >> b;

  int pMoment = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> x;
    if (a * (x - pMoment) > b)
      f -= b;
    else
      f -= a * (x - pMoment);
    pMoment = x;
  }
  if (f <= 0)
    cout << "NO\n";
  else
    cout << "YES\n";
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