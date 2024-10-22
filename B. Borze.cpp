#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char data[202];
    int digit[200];
    cin >> data;
    int i=0,j=0;
    while(i<strlen(data))
    {
        if(data[i+1]!=data[i])
        {
            if(data[i]=='-' && data[i+1]=='.')
            {
                digit[j]=1;
                j++;
                i+=2;
            }
            else
            {
                digit[j]=0;
                j++;
                i++;
            }
        }
        else
        {
            if(data[i]=='-' && data[i+1]=='-')
            {
                digit[j]=2;
                j++;
                i=i+2;
            }
            else
            {
                digit[j]=0;
                j++;
                i++;
            }
        }
    }
    int temp=j;
    j=0;
    while(j<temp)
    {
        cout << digit[j];
        j++;
    }
    cout << endl;
    return 0;
}
