#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int intersect = 0;
    int i = a;
    while (i != b)
    {
      if (i == c || i == d)
      {
        intersect++;
      }
      i++;
      if (i > 12)
        i -= 12;
    }

    if (intersect == 1)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}