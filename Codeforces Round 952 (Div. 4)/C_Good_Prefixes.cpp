#include <bits/stdc++.h>
#define optimize()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0)

using namespace std;
int main()
{
  optimize();
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    long long count = 0;
    int max = INT_MIN;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
      max = (a[i] > max) ? a[i] : max;
      sum += a[i];
      count += ((sum - max) == max) ? 1 : 0;
    }
    cout << count << "\n";
  }
  return 0;
}