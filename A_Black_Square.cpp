#include<bits/stdc++.h>
using namespace std;

typedef long long lli;
#define endl "\n"

int main()
{
    int a[5];
    for(int i=1; i<=4; i++)
    {
        cin >> a[i];
    }
    string s;
    cin >> s;
    lli cal = 0;

    for(int i = 0 ; i<s.length();i++)
    {
        int j = (int)s[i]-48;
        cal+=a[j];
    }
    cout << cal << endl;
    return 0;
}
