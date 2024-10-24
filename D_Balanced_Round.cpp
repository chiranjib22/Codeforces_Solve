#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  int n, k;
  cin >> t;

  while (t--)
  {
    cin >> n >> k;
    int arr[n];

    // input into array
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    // sort the array
    sort(arr, arr + n);

    int r = 0;
    int count = 1;
    for (int i = 1; i < n; i++)
    {
      if ((arr[i] - arr[i - 1]) <= k)
        count++;
      else
      {
        if (count > r)
          r = count;
        count = 1;
      }
    }
    if (count > r)
      r = count;

    r = n - r;
    cout << r << endl;
  }
  return 0;
}