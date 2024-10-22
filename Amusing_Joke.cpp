#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl '\n'
using namespace std;

int main()
{
    optimize();

    map<char , int > m1;
    map<char , int > m2;

    string s1, s2, s3;

    cin >> s1 >> s2 >> s3;
    for(int i=0; i<s1.length(); i++)
    {
        m1[s1[i]]++;
    }
    for(int i=0; i<s2.length() ; i++)
    {
        m1[s2[i]]++;
    }
    for(int i=0; i<s3.length(); i++)
    {
        m2[s3[i]]++;
    }
    if(m1 == m2) cout << "YES"  << endl;
    else cout << "NO" << endl; 

    return 0;
}