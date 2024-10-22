#include<bits/stdc++.h>
#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    optimize();
    int t;
    cin >> t;

    vector<pair<int,int>> p(t);

    for(int i=0; i<t; i++)
    {
        cin >> p[i].first >> p[i].second;
    }
    int c=0;
    for(int i=0; i<t; i++)
    {
        for(int j=i+1 ; j<t; j++)
        {
            if(p[i].first==p[j].second) c++;
            if(p[j].first==p[i].second) c++; 
        }
    }
    cout << c << endl;
    return 0; 
}