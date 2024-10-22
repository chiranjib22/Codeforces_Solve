#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long n, r = 0;
    cin >> n;

    // checking if n is the power of 2. If yes then it has no odd divisor(r!=1) O(logn)
    // while (n > 1)
    // {
    //   r = n % 2;
    //   if (r == 1)
    //     break;
    //   n = n / 2;
    // }
    // if (r == 1)
    //   cout << "YES\n";
    // else
    //   cout << "NO\n";

    // with bit manipulation. if n is power of 2 ,then
    // n bitwiseAND n - 1 will be 0. O(1)

    r = n & (n - 1);
    if (r == 0)
      cout << "NO\n";
    else
      cout << "YES\n";
  }
  return 0;
}