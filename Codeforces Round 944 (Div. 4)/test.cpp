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

    int l = s.length();
    int p = 1;
    int i = 1;
    bool special = false;
    while (i < l)
    {
      if (s[i - 1] == s[i])
      {
        int j;
        for (j = i + 1; s[i] == s[j]; j++)
        {
        }
        if (!special && s[j] == '1')
        {
          special = true;
          j++;
        }
        i = j;
        if (i < l)
          p++;
      }
      else
      {
        int j = i + 1;
        if (!special && s[j] == '1')
        {
          special = true;
          j++;
          i = j;
        }
        else
          i++;
        p++;
      }
    }
    cout << p << endl;
  }
  return 0;
}