#include <bits/stdc++.h>

using namespace std;

void solve(string a, string b)
{
  if (a == b)
    cout << -1 << endl;
  else
    cout << max(a.length(), b.length()) << endl;
}

int main()
{
  string a, b;
  cin >> a >> b;

  solve(a, b);

  return 0;
}