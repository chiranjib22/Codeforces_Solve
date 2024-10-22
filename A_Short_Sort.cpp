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
    int count = 0;
    if (s[0] == 'a')
      count++;
    if (s[1] == 'b')
      count++;
    if (s[2] == 'c')
      count++;
    if (count == 0)
      cout << "NO\n";
    else
      cout << "YES\n";
  }
  return 0;
}