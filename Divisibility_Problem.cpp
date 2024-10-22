#include<iostream>
using namespace std;


int main()
{
    int t;
    int a,b,r;
    cin >> t;
    while(t--)
    {
        cin >> a >> b ;
        if(a%b!=0)
        {
            r=((a/b)+1)*b-a;
        }
        else r= 0;
        cout << r << endl;
    }
    return 0;
}