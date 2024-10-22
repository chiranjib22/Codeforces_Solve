#include<bits/stdc++.h>
using namespace std;

typedef long long Int;
#define endl "\n"

int main()
{   
    int n;
    cin >> n;
    Int crime = 0;
    Int police = 0;
    while(n--)
    {
        int a;
        cin >> a;
        if(a==-1)
        {
            crime++;
            if(police>0) 
            {
                crime--;
                police--;
            } 
        }
        else {
            police+=a;
        }
        //cout << crime << " " << police << endl;
    }
     cout << crime << endl;
    return 0;
}