#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  cin >> s;

  int size = s.length();
  bool flag = 1;
  string temp = "";
  int i = 0;
  while (s[i] != '\0')
  {
    if ((size - (i + 2) > 0) && s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4')
    {
      i += 3;
    }
    else if ((size - (i + 1) > 0) && s[i] == '1' && s[i + 1] == '4')
    {
      i += 2;
    }
    else if (s[i] == '1')
    {
      i++;
    }
    else
    {
      flag = 0;
      break;
    }
  }

  if (flag)
    cout << "YES\n";
  else
    cout << "NO\n";
  return 0;
}