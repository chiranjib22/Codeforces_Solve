#include<bits/stdc++.h>
#define endl '\n';
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n[t];
    int e=0,fe=0;
    int o=0,fo=0;;
    for(int i=0; i<t; i++)
    {
        cin >> n[i];
        if(n[i]%2==0) {
            e++;
            fe=i;
        }
        else {
            o++;
            fo=i;
        }
    }

    if(e==1) cout << fe+1 << endl;
    if(o==1) cout << fo+1 << endl;
    return 0;
}