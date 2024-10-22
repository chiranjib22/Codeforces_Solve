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
    int n, m, k;
    cin >> n >> m >> k;
    int b[n];
    int c[m];
    for (int i = 0; i < n; i++)
    {
      cin >> b[i];
    }
    for (int j = 0; j < m; j++)
    {
      cin >> c[j];
    }

    int way = 0;
    // solve
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if (b[i] + c[j] <= k)
          way++;
      }
    }
    cout << way << endl;
  }
  return 0;
}