#include <bits/stdc++.h>
#define optimize()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0)
using namespace std;

int main()
{
  optimize();
  int n, t;
  cin >> n >> t;

  int a[n];
  for (int i = 1; i < n; i++)
  {
    cin >> a[i];
  }

  a[n] = 1;
  int sum = 1;
  while (sum <= n)
  {
    if (sum == t)
    {
      cout << "YES\n";
      return 0;
    }
    sum += a[sum];
  }
  cout << "NO\n";
  return 0;
}