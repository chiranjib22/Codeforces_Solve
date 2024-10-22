#include <bits/stdc++.h>
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define endl '\n'

using namespace std;

bool isTprime(long long n)
{
    int count = 2;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            count++;
        if (count > 3)
            return false;
    }
    if (count == 3)
        return true;
    else
        return false;
}
int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        long long num;
        cin >> num;
        if (isTprime(num))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}