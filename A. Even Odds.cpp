#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long k,n,position;
    cin >> n >> k;
    position = ceil((double)n/2.00000);
    if(k<=position) cout << (k*2)-1 << endl;
    else cout << (k-position)*2 << endl;
    return 0;
}
