#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  int a;
  long long count = 0;
  int s = 1;
  while (m--)
  {
    cin >> a;
    if (a >= s)
    {
      count += abs(s - a);
    }
    else
    {
      count = count + abs(s - n) + 1 + abs(1 - a);
    }
    s = a;
  }
  cout << count << endl;
  return 0;
}