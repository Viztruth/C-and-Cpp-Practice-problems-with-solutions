//C++ Program to convert Integer to roman by Vishruth Codes
#include<iostream>
using namespace std;

//Function which converts Integer to roman
void roman(int n)
{
    int pro;
    int numbr[7]={1000,500,100,50,10,5,1};
    char sym[7]={'M','D','C','L','X','V','I'};
    int i=0, max=7;
    for(int i=0;i<max;i++)
    {
        if(n>=numbr[i])
        {
            pro=n/numbr[i];
            n=n%numbr[i];
            for(int j=0;j<pro;j++)
            {
                cout<<sym[i];
            }
        }
    }
}

int main()
{
    int n;
    cout<<"\nEnter the number: ";
    cin>>n;
    cout<<"\n"<<n<<" in Roman: ";
    roman(n);
}