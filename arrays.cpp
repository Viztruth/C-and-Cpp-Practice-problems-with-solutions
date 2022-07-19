#include<iostream>
using namespace std;

int main()
{
    int n;
    //int a[]={1,2,3,4,5};
    int *p;
    p=new int[n];
    cout<<"\nEnter the size of the array: ";
    cin>>n;
    cout<<"\nEnter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    cout<<"\nThe elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<", ";
    }
    delete []p;
}