#include <bits/stdc++.h>
#define endl '\n'
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
using namespace std;

int main()
{
    optimize();
    int n, k;
    cin >> n >> k;
    int partyTime = 240;
    int needTime = 0;
    int solveProblem = 0;
    for (int i = 1; i <= n; i++)
    {
        needTime += 5 * i;
        if ((needTime + k) <= partyTime)
        {
            solveProblem++;
        }
    }
    cout << solveProblem << endl;
    return 0;
}