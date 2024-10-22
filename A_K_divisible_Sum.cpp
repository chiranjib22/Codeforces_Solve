#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, k, t;
  cin >> t;

  while (t--)
  {
    cin >> n >> k;

    long long cf = (n + k - 1) / k;

    cout << (cf * k + n - 1) / n << endl;
  }
  return 0;
}