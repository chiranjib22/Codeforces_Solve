#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a;
    int aSum = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> a;
      if (a < 0)
        a *= -1;
      aSum += a;
    }
    cout << aSum << endl;
  }
  return 0;
}