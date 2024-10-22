#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl '\n'

using namespace std;

int main()
{
    optimize();
    int t;
    int n,k,r;
    cin >> t;
    while(t--)
    {
        r=0;
        cin >> n >> k;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i] ;
        }
        if(n==k) cout << r << endl;
        else
        {
            for(int i=0; i<k; i++)
            {
            int a=i;
            for(int j=i+1; j<n; j++)
            {
                if(arr[i] > arr[j])
                {
                    a=j;
                }
            }
            if(a!=i){
                r++;
                swap(arr[a],arr[i]);
            }
            }
        cout << r << endl;
        }
    }
    return 0;
}