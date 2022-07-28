//Program to merge 2 unsorted array by Vishruth Codes
#include<iostream>
using namespace std;

void merge(int a[], int b[], int n, int m,int c[])
{
    int i=0,j=0,k=0;
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
    k--;
    if(i<n)
    {
    while(i<n)
    {
        c[k++]=a[i++];
    }
    }
    else
    {
    while(j<m)
    {   
        c[k++]=b[j++];
    }
    }
    cout<<"\nThe merged array is: ";
    for(int i=0;i<n+m;i++)
    {
        cout<<c[i]<<", ";
    }
}

int main()
{
    int n=7,m=6;
    int ar1[7]={2,4,6,8,10,12,14};
    int ar2[6]={1,3,5,7,9,11};
    int res[m+n];
    cout<<"\nThe array 1: 2,4,6,8,10,12,14\nThe array 2: 1,3,5,7,9,11";
    merge(ar1,ar2,m,n,res);
    return 0;
} 
