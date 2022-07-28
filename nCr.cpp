#include<iostream>
using namespace std;

int facto(int n)
{
    int pro;
    if(n==0)
    {
        return 1;
    }
    else
    {
        pro=n*facto(n-1);
    }
    return pro;
}

float ncr(int n, int r)
{
    float res;
    if(r==0)
    {
        res=0.0;
    }
    else{
    res=(facto(n))/(facto(r)*facto(n-r));
    }
    return res;
}

int main()
{
    int n,r;
    cout<<"\nEnter the value of n & r: ";
    cin>>n>>r;
    if(r>n)
    {
        cout<<"\nInvalid Input";
        main();
    }
    else
        cout<<"\nThe result is: "<<ncr(n,r);
    
    return 0;
}
