#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
int main()
{
    int n,k;
    
    cin >> n >> k;
    int c = 0;
    for(int i=0; i<n; i++)
    {
        int num;
        cin >> num;
        int d[k+1];
        bool flag=0;
        for(int i=0; i<=k;i++) d[i]=1;
        while(num!=0)
        {
            int q = num%10;
            num = num/10;
            if(q<=k) d[q]=0;  
        }
        for(auto u : d)
        {
            if(u!=0) flag=1;   
        }
        if(flag==0) c++;
    }
    cout << c << endl;
    return 0;
}