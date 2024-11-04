#include <bits/stdc++.h>

using namespace std;

void solve()
{
  long long n, k, x;
  cin >> n >> k >> x;

  long long mini_sum = k * (k + 1) / 2;
  long long diff = n - k;
  long long max_sum = n * (n + 1) / 2 - diff * (diff + 1) / 2;

  if (x < mini_sum || x > max_sum)
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