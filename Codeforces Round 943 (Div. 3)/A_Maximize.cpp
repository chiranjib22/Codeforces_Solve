#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x;
    cin >> x;
    int maxi = 1;
    int result = 0;
    for (int i = 1; i < x; i++)
    {
      int gcd = __gcd(x, i);
      if ((gcd + i) > maxi)
      {
        maxi = gcd + i;
        result = i;
      }
    }
    cout << result << endl;
  }
  return 0;
}