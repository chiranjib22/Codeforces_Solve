#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x;
  cin >> x;
  int bit = 0;
  while (x)
  {
    if (x & 1)
      bit++;
    x >>= 1; // x = x>>1
  }
  cout << bit << endl;
  return 0;
}