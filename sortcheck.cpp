#include<iostream>
using namespace std;

int issorted(int ar[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(ar[i]>ar[i+1])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n,ar[n],res;
    cout<<"\nEnter the size of the array: ";
    cin>>n;
    cout<<"\nEnter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    res=issorted(ar,n);
    if(res==0)
    {
        cout<<"\nThe array is sorted.";
    }
    else
    {
        cout<<"\nThe array isn't sorted.";
    }
}