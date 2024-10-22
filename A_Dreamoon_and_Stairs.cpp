#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  if (n < m)
    cout << "-1" << endl;
  else
  {
    int doubleSteps = n / 2;
    int singleSteps = n % 2;
    int moves = doubleSteps + singleSteps;

    while (moves % m != 0)
    {
      doubleSteps--;
      singleSteps += 2;
      // cout << doubleSteps << " " << singleSteps << endl;
      moves = doubleSteps + singleSteps;
    }
    cout << moves << endl;
  }
}