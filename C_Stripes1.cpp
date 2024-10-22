#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
    string s;
    int c=0;

    for(int i=0;i<8;i++)
    {
        cin >> s;
        if(s == "RRRRRRRR")  c++;
    }
    if(c==0) cout << "B" << endl;
    else cout << "R" << endl;
    }
    return 0;
}