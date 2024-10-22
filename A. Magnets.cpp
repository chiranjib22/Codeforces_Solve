#include<iostream>
using namespace std;
int main()
{
    int n,m0,m1;
    int g=0;
    cin >> n;
    int i=0;;
    while(i<n)
    {

        if(i==0) cin >> m0;
        else
        {
            cin >> m1;
            if(m0!=m1) g++;
            m0=m1;
        }
        i++;
    }
    cout << g+1 << endl;
    return 0;
}
