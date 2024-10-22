#include<bits/stdc++.h>
using namespace std;

#define enld "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main()
{
    optimize();
    int n;
    cin >> n;
    int p;
    cin >> p;
    n--;
    int best = p; 
    int worst = p;
    int count = 0; 
    while(n--)
    {
        int p;
        cin >> p;
        if(p > best)
        {
            best = p;
            count++;
        }
        if(p < worst)
        {
            worst = p;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}