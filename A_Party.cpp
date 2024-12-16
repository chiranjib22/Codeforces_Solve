#include <bits/stdc++.h>
using namespace std;

void solve(int a[], int n)
{
  int ans = 1;

  for (int i = 1; i <= n; i++)
  {
    int node = a[i];
    int dep = 1;

    while (node != -1)
    {
      node = a[node];
      dep++;
    }
    ans = max(ans, dep);
  }
  cout << ans << endl;
}

int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 1; i <= n; i++)
    cin >> a[i];

  solve(a, n);
  return 0;
}