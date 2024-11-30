#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  int ans = 0;
  int max = INT_MIN;
  int min = INT_MAX;

  cin >> n;
  int a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (a[i] > max)
      max = a[i];
    if (a[i] < min)
      min = a[i];
  }

  for (int i = 0; i < n; i++)
  {
    if (a[i] > min && a[i] < max)
      ans++;
  }
  cout << ans << endl;
  return 0;
}