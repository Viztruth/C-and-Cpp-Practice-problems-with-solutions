#include<iostream>
using namespace std;

template <typename t>
t mem<t>[10]=-1;

template <typename t>
t fib(t n)
{
    //t mem[n]=-1;
    if(n<=1)
    {
        mem<t>[n]=n;
        return n;
    }
    else
    {
        if(mem<t>[n-2]==-1)
            mem<t>[n-2]=fib(n-2);
        if(mem<t>[n-1]==-1)
            mem<t>[n-1]=fib(n-1);
        return (mem<t>[n-2]+mem<t>[n-1]);
    }
}

int main()
{
    int n;
    cout<<"\nEnter the number: ";
    cin>>n;
    fib<int>(n);
    return 0;
}
