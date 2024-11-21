#include <bits/stdc++.h>

using namespace std;

void solve(int length)
{
  int size = 0;
  string s;
  cin >> s;
  string ans = "";

  if (length % 2 != 0)
  {
    for (int i = 0; i < length; i++)
    {
      if (i % 2 != 0)
        ans = s[i] + ans;
      else
        ans = ans + s[i];
    }
  }
  else
  {
    for (int i = 0; i < length; i++)
    {
      if (i % 2 != 0)
        ans = ans + s[i];
      else
        ans = s[i] + ans;
    }
  }
  cout << ans << endl;
}

int main()
{
  int n;
  cin >> n;

  solve(n);
}