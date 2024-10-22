#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int p[m];
    for(int i=0; i<m ; i++)
    {
        cin >> p[i];
    }
    sort(p,p+m);
    
    int d= p[m-1]-p[0];
    for(int i=n ; i<=m ; i++)
    {
        int t = p[i-1]-p[i-n];
        d= min(d,t);
    }
    cout << d << endl;
    return 0;
}