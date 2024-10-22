#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;

int main()
{
    optimize();

    int t;
    cin >> t;
    while(t--)
    {
        int c;
        cin >> c;
        if(c%2==0) cout << (c/2)-1 << endl;
        if(c%2!=0) cout << c/2 << endl;
    }
    return 0;
}