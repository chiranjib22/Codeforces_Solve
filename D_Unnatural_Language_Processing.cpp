#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  string word = "";

  int i = 0;
  while (s[i] != '\0')
  {
    if (s[i] == 'a' || s[i] == 'e')
    {
      word += s[i];
      if (s[i + 2] == 'a' || s[i + 2] == 'e' && i + 2 <= n)
      {
        word += '.';
      }
    }
    else if (s[i] == 'b' || s[i] == 'c' || s[i] == 'd')
    {
      word += s[i];
      if (s[i + 1] == 'b' || s[i + 1] == 'c' || s[i + 1] == 'd' && i + 1 <= n)
      {
        word += ".";
      }
    }
    i++;
  }
  cout << word << endl;
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