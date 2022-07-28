#include<iostream>
using namespace std;

template <typename T>
T sums(T n)
{
    T sumi=0, count=0;
    for(T i=0; i<=n;i++)
    {
        sumi=sumi+i;
        //count++;
        //cout<<"\n"<<count<<" "<<sumi;
    }
    return sumi;
}

int main()
{
    int n, sum;
    cout<<"\nEnter the number: ";
    cin>>n;
    sum=sums<int>(n);
    cout<<"\nThe sum is: "<<sum;
    return 0;
}
