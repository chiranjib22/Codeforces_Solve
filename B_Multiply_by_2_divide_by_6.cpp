#include <bits/stdc++.h>
#define optimize()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0)

using namespace std;

int solve(int n)
{
  int move = 0;
  while (n > 0)
  {
    if (n == 1)
      return move;
    if (n % 6 == 0)
    {
      n /= 6;
      move++;
    }
    else
    {
      n *= 2;
      if (n % 6 == 0)
        move++;
      else
        return -1;
    }
  }
  return -1;
}
int main()
{
  optimize();
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    cout << solve(n) << endl;
  }
  return 0;
}