#include <bits/stdc++.h>
#define optimize()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0)

using namespace std;

void solve()
{
  int n, q;
  cin >> n >> q;
  int arr[n];
  int prefix_sum[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (i == 0)
      prefix_sum[i] = arr[i];
    else
      prefix_sum[i] = prefix_sum[i - 1] + arr[i];
  }

  while (q--)
  {
    int prev_sum = prefix_sum[n - 1];
    int l, r, k;
    cin >> l >> r >> k;
    int queries_sum = 0;
    if (l == 1)
      queries_sum = prefix_sum[r - 1];
    else
      queries_sum = prefix_sum[r - 1] - prefix_sum[l - 2];

    prev_sum -= queries_sum;
    prev_sum += (k * (r - l + 1));
    if (prev_sum % 2 == 0)
      cout << "NO\n";
    else
      cout << "YES\n";
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