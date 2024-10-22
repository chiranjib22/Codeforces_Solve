#include <bits/stdc++.h>
#define optimize()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
using namespace std;

void solve(void)
{
  int n;
  cin >> n;
  int a[n];

  vector<int> v1, v2;
  for (int i = 0; i < n; i++)
    cin >> a[i];
  if (n == 2)
    cout << a[0] + a[1] << endl;
  else
  {
    int sv1 = 0, sv2 = 0;
    v1.push_back(a[0]);
    sv1 += a[0];
    v2.push_back(a[1]);
    sv2 += a[1];
    bool time = 0;
    for (int i = 2; i < n; i++)
    {
      if (sv1 + a[i] > sv2 + a[i] && time)
      {
        v1.push_back(a[i]);
        sv1 += a[i];
        time = 1;
      }
      else
      {
        v2.push_back(a[i]);
        sv2 += a[i];
        time = 0;
      }
    }
    cout << *prev(v1.end()) + *prev(v2.end()) << endl;
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