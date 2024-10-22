#include<bits/stdc++.h>

using namespace std;

int cnt(string s)
{
    if(s=="Tetrahedron") return 4;
    if(s=="Cube") return 6;
    if(s=="Octahedron") return 8;
    if(s=="Dodecahedron") return 12;
    if(s=="Icosahedron") return 20;
    return 0;
}   

int main()
{
    int n;
    int r=0;
    cin >> n;
    string s;
    while(n--)
    {
        s = "";
        cin >> s;
        r+=cnt(s);

    }
    cout << r << endl;
    return 0;
}