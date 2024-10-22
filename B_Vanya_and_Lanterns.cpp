#include<bits/stdc++.h>
using namespace std;
double max (double a , double b)
{
    if(a>=b) return a;
    else return b;
}

int main()
{
    int n;
    double l,result,d=0;
    cin >> n >> l;
    int light[n];
    for(int i=0; i<n; i++)
    {
        cin >> light[i];
    }
    sort(light,light+n);
    for(int i=0; i<n; i++)
    {
        d=max(d,(light[i] - light[i-1]));
    }
    result = max(d/2.000000000, max(light[0]-0,l-light[n-1]));
    cout << fixed << setprecision(10)<< result << endl;  
    return 0;
}