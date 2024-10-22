#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
    string s1,s2;

    cin >> s1 >> s2;

    int i=0;
    int ans=1;
    while(i<s2.length())
    {
        if(s2[i]==s1[ans-1])
        {
            ans++;
        }
        i++; 
    }
    cout << ans << endl;
    return 0;
}