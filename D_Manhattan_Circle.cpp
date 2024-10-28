#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int n, m;
  cin >> n >> m;

  int row1 = 0, row2 = 0;
  int col1 = INT_MAX, col2 = INT_MIN;

  char x;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> x;
      if (x == '#')
      {
        if (row1 == 0)
          row1 = i + 1;
        row2 = i + 1;
        if (col1 > j + 1)
          col1 = j + 1;
        if (col2 < j + 1)
          col2 = j + 1;
      }
    }
  }
  cout << (row1 + row2) / 2 << " " << (col1 + col2) / 2 << endl;
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