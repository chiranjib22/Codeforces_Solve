#include<iostream>
using namespace std;
void selectionsort(int a[], int n){
    int i,j,index_mini,temp;
    for(i=0;i<n-1;i++){
        index_mini=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[index_mini]) index_mini=j;
        }
        if(index_mini!=i){
            temp=a[i];
            a[i]=a[index_mini];
            a[index_mini]=temp;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    int i=0;
    while(i<n){
        cin >> a[i];
        i++;
    }
    selectionsort(a,n);
    i=0;
    while(i<n){
        cout << a[i] << " ";
        i++;
    }
}
