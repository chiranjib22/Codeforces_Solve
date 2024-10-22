#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, x;
  cin >> n >> x;

  int ans = 0;
  for (int i = 1; i * i <= x; i++)
  {
    if (x % i == 0)
    {
      int q = x / i;
      if (q <= n && i <= n)
      {
        ans += (q == i) ? 1 : 2;
      }
    }
  }
  cout << ans << endl;
  return 0;
}