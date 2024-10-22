#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
  int n;
  cin >> n;

  string s;
  cin >> s;

  string ans = "";

  ans += s[0];
  for (int i = 1; i < n; i++)
  {
    if (ans.back() == s[i] || ans.empty())
    {
      ans += s[i];
    }
    else
    {
      if (!ans.empty())
        ans.pop_back();
    }
    // cout << "ans: " << ans << endl;
  }

  cout << ans.length() << endl;
  return 0;
}