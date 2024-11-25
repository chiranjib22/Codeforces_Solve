#include <bits/stdc++.h>

using namespace std;

void solve(int n, int m)
{
  queue<pair<int, int>> q;
  int child = 0;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;

    if (x > m)
    {
      q.push(make_pair(i, x - m));
    }
    else
      child = i;
  }

  pair<int, int> p;
  while (!q.empty())
  {
    p = q.front();
    if (p.second > m)
    {
      q.push(make_pair(p.first, p.second - m));
    }
    else
      child = p.first;
    q.pop();
  }

  cout << child + 1 << endl;
}

int main()
{
  int n, m;
  cin >> n >> m;

  solve(n, m);
  return 0;
}