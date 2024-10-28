#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;

  int x, n, m;
  while (t--)
  {
    cin >> x >> n >> m;

    while (x > 0 && (n > 0 || m > 0))
    {
      if (n > 0 && x > 20)
      {
        x = (x / 2) + 10;
        n--;
      }
      else
      {
        if (m > 0)
        {
          x = x - 10;
          m--;
        }
        else if (n > 0)
        {
          x = (x / 2) + 10;
          n--;
        }
      }
    }
    if (x > 0)
      cout << "NO\n";
    else
      cout << "YES\n";
  }
  return 0;
}