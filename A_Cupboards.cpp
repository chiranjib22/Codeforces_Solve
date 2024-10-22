#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(0)
using namespace std;

int main()
{
    optimize();
    int n;
    int lz=0,lo=0,rz=0,ro=0;
    int result = 0;
    cin >> n;
    while(n--)
    {
        int a,b;
        cin >> a >> b;
        if(a==0) lz++;
        else lo++;
        if(b==0) rz++;
        else ro++;
    }
    if(lz < lo) result+=lz;
    else result+=lo;
    if(rz < ro) result+=rz;
    else result+=ro;
    cout << result << "\n";
    return 0;
}