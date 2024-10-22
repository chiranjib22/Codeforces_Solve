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
  while (t--)
  {
    int a, b, l;
    cin >> a >> b >> l;
    set<int> s;
    for (int i = 0; pow(a, i) <= l; i++)
    {
      for (int j = 0; pow(b, j) <= l; j++)
      {
        if (l % int(pow(a, i) * pow(b, j)) == 0)
        {
          int k = l / int(pow(a, i) * pow(b, j));
          s.insert(k);
        }
      }
    }
    cout << s.size() << endl;
  }
  return 0;
}