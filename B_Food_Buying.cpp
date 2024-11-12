#include <bits/stdc++.h>
#define optimize()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define endl "\n"

using namespace std;

void solve()
{
  long long n;
  cin >> n;

  long long remain = n;
  long long cost = 0;

  while (remain >= 10)
  {
    cost += (remain / 10) * 10;
    remain = remain - ((remain / 10) * 10) + (remain / 10);
  }
  cost += remain;
  cout << cost << endl;
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