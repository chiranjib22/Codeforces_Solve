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
    int psum = 0;
    int result = 0;
    for (int i = 2; i <= n; i++)
    {
      int sum = 0;
      int j = 1;
      while (i * j <= n)
      {
        // cout << "in the loop" << endl;
        sum += (i * j);
        j++;
      }
      if (psum < sum)
      {
        psum = sum;
        result = i;
      }
    }
    cout << result << "\n";
  }
  return 0;
}