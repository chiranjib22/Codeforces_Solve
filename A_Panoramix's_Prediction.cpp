#include<bits/stdc++.h>

using namespace std;

bool is_prime(int n)
{
    for(int j=2; j<=(int)sqrt(n); j++)
    {
        if(n%j==0) return false;
    }
    return true;
}

void slove (int n, int m)
{
    int i = 0;
    int prime_count = n ;
    for(i=n+1; i<=m; i++)
    {
        if(is_prime(i))
        {
            prime_count = i;
            break;
        }
    }
    if(prime_count==m) cout << "YES\n"; 
    else cout <<  "NO\n";
}

int main()
{
    int n,m;
    cin >> n >> m;
    slove(n,m);
    return 0;
}