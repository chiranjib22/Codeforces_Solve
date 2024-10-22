#include<iostream>
using namespace std;
int main()
{
    int n,o;
    int r=0;
    cin >> n;
    while(n--)
    {
        cin >> o;
        if(o==1) r++;
    }
    if(r!=0) cout << "HARD\n";
    else cout << "EASY\n";
}
