#include <bits/stdc++.h>
#define optimize()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0)
using namespace std;

int main()
{
  optimize();
  // input
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string a = "map";
    string b = "pie";

    int mc = 0;
    int pc = 0;
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] == 'a' && s[i - 1] == 'm' && s[i + 1] == 'p')
      {
        mc++;
        s[i + 1] = '$';
      }
      if (s[i] == 'i' && s[i - 1] == 'p' && s[i + 1] == 'e')
        pc++;
    }

    cout << mc + pc << endl;
  }
  return 0;
}