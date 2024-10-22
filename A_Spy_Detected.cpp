#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int index = 1;
    int n1, n2;
    int c1 = 1, c2 = 0;
    int i1 = 1, i2 = 0;
    cin >> n1;
    for (int i = 2; i <= n; i++)
    {
      int a;
      cin >> a;
      if (a == n1)
      {
        n1 = a;
        c1++;
        i1 = i;
      }
      else
      {
        n2 = a;
        c2++;
        i2 = i;
      }
    }
    if (c1 == 1)
      cout << i1 << endl;
    else
      cout << i2 << endl;
  }
}