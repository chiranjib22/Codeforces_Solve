#include <bits/stdc++.h>

using namespace std;

void solve()
{
  long long a, b;
  cin >> a >> b;
  long long maxG, minO;
  if (a == b)
    cout << 0 << " " << 0 << endl;
  else
  {
    maxG = abs(a - b);
    minO = min(a % maxG, maxG - a % maxG);
    cout << maxG << " " << minO << endl;
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
}