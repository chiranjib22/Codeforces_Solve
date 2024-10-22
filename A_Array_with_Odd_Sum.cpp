#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    int sum = 0;
    int odd = 0;
    int even = 0;
    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      sum += a;
      if (a % 2 == 0)
        even++;
      else
        odd++;
    }
    if (sum % 2 != 0)
      cout << "YES\n";
    else
    {
      if (odd != 0 && even != 0)
        cout << "YES\n";
      else
        cout << "NO\n";
    }
  }
  return 0;
}