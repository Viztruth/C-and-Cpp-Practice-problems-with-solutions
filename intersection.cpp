//Set operation - Intersection on Arrays by Vishruth Codes
#include<iostream>
using namespace std;

void displayed(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        {
            cout<<a[i]<<".";
        }
        else{
           cout<<a[i]<<", "; 
        }
    }
}

int intersection(int a[], int n, int b[], int m, int res[])
{
    int count=0,k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                res[k++]=a[i];
                count++;
            }
        }
    }
    
    return (count);
}

int main()
{
    int n,m,l;
    int ar1[]={1,4,9,5,16,32};
    int ar2[]={1,2,3,4,5,6,7,8,9,10};
    n=sizeof(ar1)/sizeof(ar1[0]);
    cout<<"\nArray1: ";
    displayed(ar1,n);
    m=sizeof(ar2)/sizeof(ar2[0]);
    cout<<"\nArray2: ";
    displayed(ar2,m);
    //size of smaller array
    int un[n];
    int size=intersection(ar1,n,ar2,m,un);
    //Here size is the length of intersection
    cout<<"\nThe Intersection: ";
    displayed(un,size);

    return 0;
}
