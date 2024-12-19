#include <bits/stdc++.h>

using namespace std;

int solveThree(int best, int other1, int other2)
{
  return max(0, max(other1, other2) + 1 - best);
}

void solve()
{
  int a, b, c;
  cin >> a >> b >> c;

  cout << solveThree(a, b, c) << " " << solveThree(b, a, c) << " " << solveThree(c, a, b) << endl;
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