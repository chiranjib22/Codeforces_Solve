#include<iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    int a[n];
    cin >> a[0];
    int max=a[0],Mp;
    int min=a[0],mp;
    for(int i=1;i<n;i++)
    {
        cin >> a[i];
        if(max<a[i])
        {
            max=a[i];
            Mp=i;
        }
        if(min>=a[i])
        {
            min=a[i];
            mp=i;
        }
    }
    int b=(n-1)-mp;
    int c;
    if(mp>Mp)  c = Mp;
    else  c= Mp-1;
    int result = b+c;
    cout << result << endl;
    return 0;
}