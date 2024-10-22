#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    pair<int, int> p[n];

    for (int i = 0; i < n; i++)
    {
      cin >> p[i].first >> p[i].second;
    }

    int w = p[0].first;
    int e1 = p[0].second;
    for (int i = 1; i < n; i++)
    {
      if (p[i].first >= w && p[i].second >= e1)
      {
        w = -1;
        break;
      }
    }
    cout << w << "\n";
  }
}