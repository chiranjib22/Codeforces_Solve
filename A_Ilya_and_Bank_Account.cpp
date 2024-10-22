#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n >= 0)
        cout << n << endl;
    else
    {
        int a = n % 10; // n = -1003 ; a = -3
        int m = n / 10; // m = -100
        int b = m / 10; // b = -10
        b = b * 10 + a; // b = -103
        if (m > b)
            cout << m << endl;
        else
            cout << b << endl;
    }
    return 0;
}