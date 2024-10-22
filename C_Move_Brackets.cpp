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
    char x;
    vector<char> v;
    cin >> x;
    v.push_back(x);

    for (int i = 1; i < n; i++)
    {
      cin >> x;
      if (x == ')' && *(v.end() - 1) == '(')
      {
        v.pop_back();
        continue;
      }
      else
        v.push_back(x);
    }

    cout << v.size() / 2 << endl;
  }
  return 0;
}