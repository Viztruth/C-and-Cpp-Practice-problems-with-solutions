//Factorial of a no. using recursion
#include<iostream>
using namespace std;

template <typename t>
t facto(t n)
{
    t pro=1;
    for(t i=1;i<=n;i++)
    {
        pro=pro*i;
    }
    return pro;
}

int main()
{
    int n, fact;
    cout<<"\nEnter the no: ";
    cin>>n;
    fact=facto<int>(n);
    cout<<"\nThe factorial is: "<<fact;
}