#include <bits/stdc++.h>

using namespace std;

void solve()
{
  string s;
  cin >> s;

  getchar(); // to get the unwanted newline from keyboard
  char c;
  cin >> c;

  bool flag = 0;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == c)
    {
      if (i % 2 == 0 && (s.length() - 1 - i) % 2 == 0)
      {
        flag = 1;
        break;
      }
    }
  }

  if (flag)
    cout << "YES\n";
  else
    cout << "NO\n";
}

int main()
{
  int t;
  cin >> t;

  while (t--)
    solve();
  return 0;
}