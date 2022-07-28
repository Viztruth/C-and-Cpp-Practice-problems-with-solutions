//Program to generate fibonacci series using recursion by Vishruth Codes
#include<iostream>
using namespace std;


int fib(int n, int ar[])
{
    //t mem[n]=-1;
    if(n<=1)
    {
        ar[n]=n;
        return n;
    }
    else
    {
        if(ar[n-2]==-1)
            ar[n-2]=fib(n-2,ar);
        if(ar[n-1]==-1)
            ar[n-1]=fib(n-1,ar);

        ar[n]=ar[n-2]+ar[n-1];
        return (ar[n-2]+ar[n-1]);
    }
}

int main()
{
    int n;
    cout<<"\nEnter the count: ";
    cin>>n;
    int ar[n];
    for(int i=0;i<=n;i++)
    {
        ar[i]=-1;
    }
    printf("The term %d (starting from 0) in fibonacci series is: %d",n,fib(n,ar));
    cout<<"\nThe series: ";
    for(int i=0;i<=n;i++)
    {
        cout<<ar[i]<<", ";
    }
    return 0;
}
