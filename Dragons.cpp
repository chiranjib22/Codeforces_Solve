#include<bits/stdc++.h>

using namespace std;

bool comparator(const pair<int,int> &p1, const pair<int,int> &p2)
{
    if(p1.first < p2.first) return 1;
    else if(p1.first==p2.first) return(p1.second > p2.second); 
    else return 0;
}

int main()
{
    int s,n;
    cin >> s >> n;
    pair<int,int>p[n];
    for(int i=0; i<n; i++)
    {
        cin >> p[i].first >> p[i].second;
    }
    sort(p,p+n,comparator);
    for(auto u: p)
    {
        cout << u.first << " " << u.second << endl;
    }
    // if(s) cout << "YES" << endl;
    // else cout << "NO" << endl;
    return 0;
}