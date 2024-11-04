#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, b, d;
  cin >> n >> b >> d;

  int clean = 0;
  int waste = 0;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    if (x <= b)
    {
      waste += x;
    }
    if (waste > d)
    {
      waste = 0;
      clean++;
    }
    // cout << waste << endl;
  }
  cout << clean << endl;
  return 0;
}