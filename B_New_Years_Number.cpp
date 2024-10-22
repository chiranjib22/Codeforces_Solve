#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;

    int y = n % 2020;
    int x = ((n - y) / 2020) - y;

    if (x >= 0 && (2020 * (x + y) + y) == n)
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
  }
  return 0;
}