#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int a = (k*l)/nl;
    int b = (c*d);
    int f = p/np;

    cout << min(a,min(b,f))/n << endl;
    return 0;    
}