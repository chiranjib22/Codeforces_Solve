#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i=1;
    while(i<=n){
        if(i%2==0) cout << "I love ";
        else cout << "I hate ";
        if(i==n) cout << "it\n";
        else  cout << "that ";
        i++;
    }
    return 0;
}
