#include <bits/stdc++.h>
#define optimize()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0)
using namespace std;

int main()
{
  optimize();
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    sort(a, a + n);
    int r1 = a[0] % a[1];
    for (int j = 2; j < n; j++)
    {
      r1 = r1 % a[j];
    }
    sort(a, a + n, greater<int>());
    int r2 = a[0] % a[1];
    for (int j = 2; j < n; j++)
    {
      r2 = r2 % a[j];
    }
    cout << r1 << " " << r2 << endl;
    if (r1 != 0 || r2 != 0)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}