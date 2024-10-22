#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  cin.ignore();
  while (t--)
  {
    string s;
    getline(cin, s);
    char c = s[0];
    s[0] = s[4];
    s[4] = c;
    cout << s << "\n";
  }
  return 0;
}