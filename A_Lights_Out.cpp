#include<bits/stdc++.h>
using namespace std;

int toggle[4][4];
int press[4][4];
int main()
{
    for(int i=1; i<=3; i++)
    {
        for (int j=1; j<=3; j++)
        {
            cin >> press[i][j];
            toggle[i][j]=press[i][j];
        }
    }
    
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=3; j++)
        {
            if(press[i][j]!=0)
            {
                toggle[i][j-1]+=press[i][j];
                toggle[i][j+1]+=press[i][j];
                toggle[i-1][j]+=press[i][j];
                toggle[i+1][j]+=press[i][j];
            }

        }
    }

    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=3; j++)
        {
            if(toggle[i][j]%2==0) cout << "1";
            else cout << "0";
        }
        cout << "\n";
    }
     return 0;
 }