#include<iostream>
using namespace std;

int facto(int n)
{
    int f;
    if(n==0)
    {
        return 1;
    }
    else
    {
        f=n*facto(n-1);
    }
    return f;
}

int main()
{
    int n, f;
    cout<<"\nEnter the no. whose factorial you wish to find: ";
    cin>>n;
    f=facto(n);
    cout<<"\nThe factorial of "<<n<<" is: "<<f;
}