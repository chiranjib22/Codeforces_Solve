#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    cin >> n >> t;
    char q[n];
    cin >> q;
    cout << q;
    while(t--)
    {
        int i=0;
        while(i<n){
            if(q[i]=='B' && q[i+1]=='G'){
                swap(q[i],q[i+1]);
                i=i+2;
            }
        }
    }
    return 0;
}
