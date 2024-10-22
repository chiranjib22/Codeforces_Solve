#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a,c=0;
    cin >> a;
    while(a!=0)
    {
        if(a>=100)
        {
            c++;
            a=a-100;
        }
        else if(a>=20)
        {
            c++;
            a=a-20;
        }
        else if(a>=10)
        {
            c++;
            a=a-10;
        }
        else if(a>=5)
        {
            c++;
            a=a-5;
        }
        else if(a>=1)
        {
            c++;
            a=a-1;
        }
        else a=a;
    }
    cout << c << endl;
    return 0;
}