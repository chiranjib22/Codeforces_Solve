#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl '\n';

using namespace std;

int main()
{
    optimize();

    int n,m;
    cin >> n >> m;
    //bool flag=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(i%2!=0) cout << "#";
            else
            {
                if((i/2)%2!=0)
                {
                    if(j==m)
                    {
                       cout << "#";
                    }
                    else cout << ".";
                } 
                else
                {
                    if(j==1)
                    {
                        cout << "#";
                    }
                    else cout << ".";
                }
            }
        }
        cout << endl;
    }
    return 0;
}