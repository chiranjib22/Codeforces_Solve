#include <bits/stdc++.h>

using namespace std;

int main()
{
  unsigned int n, result;
  cin >> n;

  if (n == 0)
    result = 1;
  else
  {
    if (n % 4 == 0)
      result = 6;
    if (n % 4 == 1)
      result = 8;
    if (n % 4 == 2)
      result = 4;
    if (n % 4 == 3)
      result = 2;
  }
  cout << result << endl;
  return 0;
}