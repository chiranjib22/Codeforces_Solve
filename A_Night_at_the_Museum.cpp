#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
int main()
{
    string s;
    cin >> s;
    int l = s.length();

    char c = 'a';
    int result=0;
    for(int i = 0 ;i<l; i++)
    {
        char d = s[i];

        int f1 = abs(d-c);
        int f2 = 26 - f1 ;

        result += min(f1,f2);
        c = d;
    }
    cout << result << endl;   
    return 0;
}