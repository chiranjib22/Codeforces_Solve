#include <bits/stdc++.h>
using namespace std;

int main()
{
  char c;
  cin >> c;

  string v;
  v = "qwertyuiopasdfghjkl;zxcvbnm,./";

  string s;
  cin >> s;

  string ans = "";
  for (int i = 0; i < s.length(); i++)
  {
    for (int j = 0; j < v.length(); j++)
    {
      if (v[j] == s[i])
      {
        if (c == 'R')
          ans += v[j - 1];
        if (c == 'L')
          ans += v[j + 1];
      }
    }
  }

  cout << ans << endl;
  return 0;
}