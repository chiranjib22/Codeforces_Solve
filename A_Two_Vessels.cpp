#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double a, b, c;
        double avg, result;
        cin >> a >> b >> c;
        avg = (a + b) / 2.0;
        if (a > b)
        {
            avg = a - avg;
        }
        else
        {
            avg = b - avg;
        }
        result = ceil(avg / c);
        cout << result << endl;
    }
    return 0;
}