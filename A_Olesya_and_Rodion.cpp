#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, t;
  cin >> n >> t;

  string s = "";

  if (t < 10) // any number ending with t is divisible by the same t
  {
    for (int i = 0; i < n; i++)
      s += to_string(t);
  }
  else if (t == 10)
  {
    if (n == 1) // single digit number isn't divisible by 10
      s = "-1";
    else // more than one digit is divisible by 10 when ending with 10.
    {
      for (int i = 0; i < n - 2; i++)
        s += "1";
      s += "10";
    }
  }
  cout << s << endl;
  return 0;
}