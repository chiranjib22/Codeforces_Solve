#include <bits/stdc++.h>

using namespace std;

void solve(int n, int k)
{
  long long maxJoy = INT_MIN;
  long long f, t;

  while (n--)
  {
    cin >> f >> t;

    if (t > k)
      maxJoy = max(maxJoy, f - (t - k));
    else
      maxJoy = max(maxJoy, f);
  }
  cout << maxJoy << endl;
}

int main()
{
  long long n, k;

  cin >> n >> k;

  solve(n, k);

  return 0;
}