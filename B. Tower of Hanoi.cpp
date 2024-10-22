#include<iostream>
using namespace std;
void input(int p[3][3])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> p[i][j];
        }
    }
}
int minimum_move_TOH(int n,int a,int b,int c,int p[3][3])
{
    int d;
    if(n>0)
    {
        d= p[a][c]+minimum_move_TOH(n-1,a,c,b,p)+minimum_move_TOH(n-1,b,a,c,p);
    }
    return d;
}

int main()
{
    int matrix[3][3];
    int n;
    input(matrix);
    cin >> n;
    int a=0;
    int b=1;
    int c=2;
    cout << minimum_move_TOH(n,a,b,c,matrix) << endl;;
    return 0;
}
