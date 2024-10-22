#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        if(n==1) cout << "YES" << endl;
        else{
            sort(a,a+n);
            int c=0;
            for(int i=0; i<n-1; i++)
            {
                for(int j=i+1; j<n; j++)
                {
                    if(a[i] > a[j] ) c=1;
                    if(a[i] == a[j]) c=1;  
                }
            }
            if(c==1) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    } 
    return 0;
}