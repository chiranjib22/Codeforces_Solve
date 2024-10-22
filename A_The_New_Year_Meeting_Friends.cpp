#include <bits/stdc++.h>
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define endl '\n'

int findMax(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if (b > c)
            return b;
        else
            return c;
    }
}
int findMin(int a, int b, int c)
{
    if (a < b)
    {
        if (a < c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if (b < c)
            return b;
        else
            return c;
    }
}
using namespace std;
int main()
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int max = findMax(x1, x2, x3);
    int min = findMin(x1, x2, x3);

    cout << max - min << endl;

    return 0;
}