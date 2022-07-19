#include<iostream>
using namespace std;

void insertion(int ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cout<<"\nThe array you entered: ";
    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        {
            cout<<ar[i]<<".";
        }
        else{
        cout<<ar[i]<<", ";
        }
    }
}

void merge(int a[], int b[], int n, int m)
{
    int i=0,j=0,k=0,c[n+m];
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        else{
            c[k++]=b[j++];
        }
    }
    for(;i<n;i++)
    {
        c[k++]=a[i];
    }
    for(;j<m;j++)
    {
        c[k++]=b[j];
    }
    cout<<"\nThe merged array is: ";
    for(int i=0;i<n+m;i++)
    {
        cout<<c[i]<<", ";
    }
}

int main()
{
    int n,m,ar1[m],ar2[n];
    cout<<"\nEnter the sizes of the 2 arrays:  ";
    cin>>n>>m;
    cout<<"\nEnter the elements of array 1: ";
    insertion(ar1,m);
    cout<<"\nEnter the elements of array 2: ";
    insertion(ar2,n);
    merge(ar1,ar2,m,n);
} 