// unsolved

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
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    // slove
    int index = 0;
    bool possible = 1;
    int count = n;

    while (count > 0 && possible)
    {
      int max = -1;
      for (int i = 0; i < n; i++)
      {
        if (a[i] > max)
        {
          max = a[i];
          index = i;
        }
      }
      a[index - 1] -= 1;
      a[index] -= 2;
      a[index + 1] -= 1;

      for (int i = 0; i < n; i++)
      {
        if (a[i] < 0)
        {
          possible = 0;
          break;
        }
        if (a[i] == 0)
        {
          count--;
        }
      }

      // for (int i = 0; i < n; i++)
      // {
      //   cout << a[i] << " ";
      // }
      // cout << endl;
    }
    // cout << count << " " << possible << endl;
    if (count <= 0 && possible)
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
  }
  return 0;
}