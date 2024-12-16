#include <bits/stdc++.h>
#define optimize()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0)
using namespace std;

void solve()
{
  int n;
  cin >> n;
  int a[n];
  bool flag = 1;
  int count = 0;

  for (int i = 0; i < n; i++)
    cin >> a[i];

  for (int i = n - 2; i >= 0; i--)
  {
    if (a[i + 1] == 0)
    {
      flag = 0;
      break;
    }
    else
    {
      while (a[i] >= a[i + 1])
      {
        count++;
        a[i] /= 2;
      }
    }
  }

  if (flag)
  {
    cout << count << endl;
  }
  else
  {
    cout << -1 << endl;
  }
}

int main()
{
  optimize();
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}