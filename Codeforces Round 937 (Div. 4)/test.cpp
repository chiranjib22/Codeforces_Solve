#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;

    string hour;
    hour += s[0];
    hour += s[1];

    string min;
    min += s[3];
    min += s[4];

    string result;
    int h = stoi(hour);
    if (h >= 0 && h < 12)
    {
      if (h >= 1 && h <= 9)
        result = "0" + to_string(h);
      else if (h == 0)
        result = "12";
      else
        result += to_string(h);
      result += ":" + min + " AM";
    }
    else
    {
      int x = h - 12;
      if (x >= 1 && x <= 9)
        result = "0" + to_string(x);
      else if (x == 0)
        result = "12";
      else
        result += to_string(x);
      result += ":" + min + " PM";
    }
    cout << result << endl;
  }
  return 0;
}