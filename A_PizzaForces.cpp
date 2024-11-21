#include <bits/stdc++.h>

using namespace std;

void solve()
{
  long long n;
  cin >> n;

  long long ans = 0;
  if (n <= 6)
    cout << 15 << endl;
  else
  {
    if (n % 2 != 0)
      n++;
    cout << (n * 5) / 2 << endl;
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
  return 0;
}