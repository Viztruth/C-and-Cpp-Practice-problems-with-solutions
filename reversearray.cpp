//Program to reverse an array
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"\nEnter the length:";
    cin>>n;
    int a[n],temp;
    cout<<"\nEnter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nThe entered array: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(int i=0;i<n/2;i++)
    {
            temp=a[i];
            a[i]=a[n-i-1];
            a[n-i-1]=temp;
    }
    cout<<"\nThe reversed array:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
