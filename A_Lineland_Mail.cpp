#include <bits/stdc++.h>
#define optimize()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0)

using namespace std;

void solve(long long a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    long long mi = INT_MAX;
    long long ma = INT_MIN;

    if (i == 0)
    {
      mi = abs(a[i] - a[i + 1]);
      ma = abs(a[i] - a[n - 1]);
    }
    else if (i == n - 1)
    {
      mi = abs(a[i] - a[n - 2]);
      ma = abs(a[i] - a[0]);
    }
    else
    {
      mi = min(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1]));
      ma = max(abs(a[i] - a[0]), abs(a[i] - a[n - 1]));
    }
    cout << mi << " " << ma << endl;
  }
}

int main()
{
  optimize();
  int n;
  cin >> n;
  long long a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  solve(a, n);
  return 0;
}