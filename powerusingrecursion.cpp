#include<iostream>
using namespace std;

template <typename t>
t power(t b,t p)
{
    t i,res;
    if(p==0)
    {
        return 1;
    }
    else{
        res=b*power(b,p-1);
    }
    return res;
}

int main()
{
    int base, pow,res;
    cout<<"\nEnter the base and power: ";
    cin>>base>>pow;
    res=power<int>(base,pow);
    cout<<"\n"<<base<<" raised to power "<<pow<<" is: "<<res;
}