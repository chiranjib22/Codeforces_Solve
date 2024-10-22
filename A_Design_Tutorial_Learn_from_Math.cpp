#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a = 0;
  if (n % 2 == 0)
  {
    n = n - 8;
    a = 8;
  }
  else
  {
    n = n - 9;
    a = 9;
  }
  cout << a << " " << n << endl;
  return 0;
}