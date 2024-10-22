#include<iostream>
using namespace std;
int main()
{
    char a[102] ,b[102] ,c[103];
    cin >> a >> b;
    int i=0;
    while(a[i]!='\0'){
        if(a[i]==b[i]) c[i]='0';
        else c[i]='1';
        i++;
    }
    c[i]='\0';
    cout << c << endl;
    return 0;
}
