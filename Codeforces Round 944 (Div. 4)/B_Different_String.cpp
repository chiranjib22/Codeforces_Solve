#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    string old = s;
    int l = s.length();

    for (int i = 0; i < l - 1; i++)
    {
      for (int j = 1; j < l; j++)
        if (s[i] != s[j])
        {
          swap(s[i], s[j]);
          if (s != old)
          {
            break;
          }
        }
    }
    if (s == old)
      cout << "NO\n";
    else
    {
      cout << "YES\n";
      cout << s << "\n";
    }
  }
  return 0;
}