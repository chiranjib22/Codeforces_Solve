#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int n;
  int a = 0;
  cin >> n;
  a += (n / 4);
  n = n % 4;
  a += (n / 2);
  cout << a << endl;
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