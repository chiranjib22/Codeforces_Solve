#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;

    int count = 0;
    int i = 0, j = 0;
    while (j < m && i < n)
    {
      if (a[i] == b[j])
      {
        count++;
        i++;
        j++;
      }
      else
        j++;
    }
    cout << count << endl;
  }
  return 0;
}