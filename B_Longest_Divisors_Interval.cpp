#include <bits/stdc++.h>

using namespace std;

void solve()
{
  long long num;
  cin >> num;

  long long mul = 1;

  while (num % mul == 0)
  {
    mul++;
  }
  cout << --mul << endl;
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