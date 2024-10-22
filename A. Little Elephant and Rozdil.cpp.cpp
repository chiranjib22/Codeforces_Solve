#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    int n;
    int mini=0,index=1,c=0;
    for (int i=0;i<a;i++)
    {
        cin >> n;
        if(i==0) {
            mini=n;
            c++;
        }
        else{
            if(mini>n){
                c=0;
                mini=n;
                index=i+1;
            }
            if(mini==n) c++;
        }
    }
    if(c!=1) cout << "Still Rozdil" << '\n';
    else cout << index << '\n';
    return 0;
}
