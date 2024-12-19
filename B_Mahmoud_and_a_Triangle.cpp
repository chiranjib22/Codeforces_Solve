#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int a[n];

  for (int i = 0; i < n; i++)
    cin >> a[i];

  bool flag = 0;
  sort(a, a + n);
  for (int i = 1; i < n - 1; i++)
  {
    if (a[i - 1] + a[i] > a[i + 1])
    {
      flag = 1;
      break;
    }
  }
  if (flag)
    cout << "YES\n";
  else
    cout << "NO\n";

  return 0;
}