#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int n;
  cin >> n;
  int a;
  int count = 0;

  for (int i = 0; i < n; i++)
  {
    cin >> a;
    if (a == i + 1)
      count++;
  }
  if (count % 2 == 0)
    cout << count / 2 << endl;
  else
    cout << count / 2 + 1 << endl;
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