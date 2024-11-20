#include <bits/stdc++.h>
#define optimize()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0)
using namespace std;

void solve()
{
  int n, a, b, c, d;
  cin >> n >> a >> b >> c >> d;

  int minMass = n * (a - b);
  int maxMass = n * (a + b);

  int minTotal = c - d;
  int maxTotal = c + d;

  // bool flag = 0;
  // for (int i = minTotal; i <= maxTotal; i++)
  // {
  //   if (i >= minMass && i <= maxMass)
  //   {
  //     flag = 1;
  //     break;
  //   }
  // }
  // if (flag)
  //   cout << "YES\n";
  // else
  //   cout << "NO\n";

  if (minMass <= maxTotal && maxMass >= minTotal)
    cout << "YES\n";
  else
    cout << "NO\n";
}

int main()
{
  optimize();
  int t;
  cin >> t;

  while (t--)
  {
    solve();
  }
  return 0;
}