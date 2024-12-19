#include <bits/stdc++.h>

using namespace std;

// calculate steps
int calculate(string sub, string m)
{
  char x = sub[0];
  char y = sub[1];
  int steps = 0;
  int j = m.length() - 1;

  while (j >= 0 && m[j] != y)
  {
    j--;
    steps++;
  }

  j = j - 1;
  while (j >= 0 && m[j] != x)
  {
    j--;
    steps++;
  }

  return steps;
}

void solve()
{
  string num;
  cin >> num;

  int ans = INT_MAX;
  vector<string> substring = {"00", "25", "50", "75"};

  // calculated steps to make the every substring
  for (auto u : substring)
  {
    int steps = calculate(u, num);
    ans = min(ans, steps);
  }
  cout << ans << endl;
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