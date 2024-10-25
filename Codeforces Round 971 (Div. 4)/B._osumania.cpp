#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int n;
  cin >> n;

  int a[n];
  char x;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cin >> x;
      if (x == '#')
        a[i] = j + 1;
    }
  }

  for (int i = n - 1; i >= 0; i--)
  {
    cout << a[i] << " ";
  }
  cout << endl;
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