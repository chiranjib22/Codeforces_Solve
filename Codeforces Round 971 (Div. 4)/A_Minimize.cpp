#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int a, b;
    cin >> a >> b;

    int r = 0;
    int min = INT_MAX;
    for (int c = a; c <= b; c++)
    {
      r = (c - a) + (b - c);
      if (min > r)
        min = r;
    }
    cout << min << endl;
  }
  return 0;
}