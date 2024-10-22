#include<bits/stdc++.h>

using namespace std;


int main()
{
    int al[26]={0};
    int a;
    cin >> a;
    char s[a];
    cin >> s;

    for(int i=0 ; i<a; i++)
    {
        if(s[i]>='A' && s[i] <= 'z')
        {
            if(isupper(s[i]))
            {
                al[s[i]-'A']=1;
            }
            if(islower(s[i]))
            {
                al[s[i]-'a']=1;
            }
        }
    }
    for(int i=0 ; i<26 ; i++)
    {
        if(al[i]==0) 
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}