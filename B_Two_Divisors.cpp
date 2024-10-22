#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
  if (a == 0 || b == 0)
    return 0;
  if (a == b)
    return a;
  if (a > b)
    return gcd(a - b, b);
  else
    return gcd(b, b - a);
}

int solve(int a, int b)
{
  int g = gcd(a, b);

  if (b % a == 0)
    return b * (b / a);
  else
    return b * (a / g);
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b;
    cin >> a >> b;
    cout << solve(a, b) << endl;
  }
  return 0;
  vector<int>v;
  
}