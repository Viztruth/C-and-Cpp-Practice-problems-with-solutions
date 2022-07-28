#include<iostream>
using namespace std;

void tables(int n, int s, int e)
{
    for(int i=s;i<=e;i++)
    {
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }
}

int main()
{
    int n,srange,erange;
    cout<<"\nEnter the Number: ";
    cin>>n;
    cout<<"\nEnter the starting range: ";
    cin>>srange;
    cout<<"\nEnter the ending range: ";
    cin>>erange;
    cout<<"\n";
    tables(n,srange,erange);
    return 0;
}
