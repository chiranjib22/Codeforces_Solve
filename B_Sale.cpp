#include <bits/stdc++.h>
#define optimize()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0)
using namespace std;

int main()
{
  optimize();

  int m, n;
  cin >> n >> m;

  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int money = 0;
  sort(a, a + n);
  for (int i = 0; i < n; i++)
  {
    if (money < (money - a[i]) && m > 0)
    {
      money -= a[i];
      m--;
    }
  }
  cout << money << "\n";
  return 0;
}