#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int n;
  cin >> n;

  cout << n % 10 + n / 10 << endl;
}

int main()
{
  int t;
  cin >> t;

  while (t--)
    solve();
  return 0;
}