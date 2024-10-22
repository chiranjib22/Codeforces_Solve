#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;
#define endl '\n'

int a[100002];
int main()
{
    optimize();
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        int num;
        cin >> num;
        a[num]=i;
    }
    int m;
    cin >> m;

    ll v=0;
    ll p=0;
    
    while(m--)
    {
        ll b;
        cin >> b;
        if(a[b]!=0){
            v+=a[b];
            p+=n-a[b]+1;
            //cout << a[b] << endl;
        }
    }
    cout << v << " " << p << endl;
}