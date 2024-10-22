#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int start = 0;
    int terminate = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i]!='.')
        {
            start=i+1;
            break;
        }
    }
    for(int i = start-1; i<n; i++)
    {
        if(s[i]=='L')
        {
            terminate = i;
            break;
        }
        if(s[i]=='.')
        {
            terminate= i+1;
            break;
        }
    }
    cout << start << " " << terminate << endl;   
}