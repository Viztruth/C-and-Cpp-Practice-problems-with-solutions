#include<iostream>
using namespace std;

int facto(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
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
