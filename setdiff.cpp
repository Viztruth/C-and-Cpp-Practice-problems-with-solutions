//Set operation - set difference on Arrays using intersection by Vishruth Codes
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
    return count;
}


int setdiff(int a[], int n, int b[], int m, int res[])
{
    int count=0,k=0,l;
    //size of array 2(smaller array)
    int cm[n];
    l=intersection(a,n,b,m,cm);
    for(int i=0;i<n;i++)
    {
        int p=0;
        for(int j=0;j<l;j++)
        {
            if(a[i]==cm[j])
            {
                p++;
                break;
            }
        }
        if(p==0)
        {
            res[k++]=a[i];
            count++;
        }
    }
    return (count);
}

int main()
{
    int n,m,l;
    int ar1[]={1,4,5,9,16,32};
    int ar2[]={1,2,3,4,6,7,8,9,10};
    n=sizeof(ar1)/sizeof(ar1[0]);
    cout<<"\nArray1: ";
    displayed(ar1,n);
    m=sizeof(ar2)/sizeof(ar2[0]);
    cout<<"\nArray2: ";
    displayed(ar2,m);
    int un[m];
    int size=setdiff(ar1,n,ar2,m,un);
    //Here size is the length of intersection
    cout<<"\nThe Set Difference (A1-A2): ";
    displayed(un,size);

    return 0;
}
