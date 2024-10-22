#include <bits/stdc++.h>
#define optimize()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0)
using namespace std;

int main()
{
  optimize();
  int t;
  cin >> t;
  string m = "meow";
  while (t--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
      s[i] = tolower(s[i]);

    auto it = unique(s.begin(), s.end());
    int d = it - s.begin();
    s.resize(d);

    if (s == m)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}