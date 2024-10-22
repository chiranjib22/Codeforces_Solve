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
    int a, b;
    cin >> a >> b;

    if (b == 1)
      cout << "NO\n";
    else
      cout << "YES\n"
           << a << " " << (long long)a * b << " " << (long long)a * (b + 1) << "\n";
  }
  return 0;
}