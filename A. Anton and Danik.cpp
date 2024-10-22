#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,d=0;
    string w;
    cin >> n;
    cin >> w;
    for(int i=0;w[i]!='\0';i++)
    {
        if(w[i]=='A') a++;
        if(w[i]=='D') d++;
    }
    if(a>d) cout << "Anton" << endl;
    else if(a<d) cout <<"Danik" << endl;
    else cout << "Friendship" << endl;
    return 0;
}
