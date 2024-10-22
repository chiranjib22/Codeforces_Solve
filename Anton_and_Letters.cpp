#include<bits/stdc++.h>

using namespace std;
int letter[26];

int main()
{
    int c=0;
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
       if(s[i]>='a' && s[i]<='z')
       {
           letter[s[i]- 97]=1;
           
       } 
    }
    for(int i=0 ; i<26 ;i++)
    {
        if(letter[i]!=0) c++;
    }
    cout << c << endl;
    return 0;
}