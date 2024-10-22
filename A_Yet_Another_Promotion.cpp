#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long a,b;
    long long n,m;
    while(t--)
    {
        cin >> a >> b;
        cin >> n >> m;
        long long ans = 0; 
        if(n<m)
        {
            if(a<b)
            {
                ans+=a*n;
            }
            else 
            ans+=b*n;
        }
        else{ //n>m
            int q = n%(m+1);
            if (q==0) ans+= (a*(n/(m+1)*m));
            else{
                ans+=((a*(n/(m+1)*m))+q*b);
            }
        }
        cout << ans << endl;
    }
}