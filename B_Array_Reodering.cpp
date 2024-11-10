#include <bits/stdc++.h>
#define optimize()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
using namespace std;

int gcd(int a, int b)
{
  while (b)
  {
    a %= b;
    swap(a, b);
  }
  return a;
}

void solve()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  sort(a, a + n, [](int a, int b)
       { return a % 2 < b % 2; }); // using lambda

  int goodPairs = 0;
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (gcd(a[i], 2 * a[j]) > 1)
        goodPairs++;
    }
  }
  cout << goodPairs << endl;
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