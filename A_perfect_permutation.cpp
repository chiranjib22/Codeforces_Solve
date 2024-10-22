#include <bits/stdc++.h>
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
using namespace std;

int main()
{
    optimize();
    int a;
    cin >> a;
    if (a % 2 != 0)
        cout << -1 << "\n";
    else
    {
        for (int i = 1; i <= a; i++)
        {
            if (i % 2 != 0)
                cout << i + 1 << ' ';
            else
                cout << i - 1 << ' ';
        }
        cout << '\n';
    }
    return 0;
}
