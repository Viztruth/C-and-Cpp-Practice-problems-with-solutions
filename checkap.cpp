//program to check whether the sorted array is in arithmetic progression
//or geometric progression by Vishruth Codes
#include<iostream>
#include<math.h>
using namespace std;

int checksap(int ar[], int n)
{
int sub,countap=0;
//Check for a.p.
sub=ar[1]-ar[0];
for(int i=2;i<n;i++)
{
    if((ar[i]-ar[i-1])!=sub)
    {
        countap++;
    }
}
if(countap<1)
{
    cout<<"\nThe array is in A.P.";
}
}

int checksgp(int ar[], int n)
{
int countgp=0;
//check for g.p.
int div=ar[1]%ar[0];
for(int i=2;i<n;i++)
{
    if((ar[i]%ar[i-1])!=div)
    {
        countgp++;
    }
}
if(countgp<1)
{
    cout<<"\nThe array is in G.P.";
}
}

int main()
{
    int res,n;
    cout<<"\nEnter size of array: ";
    cin>>n;
    int seq[n];
    cout<<"\nEnter the "<<n<<" terms of the sequence: ";
    for(int i=0;i<n;i++)
    {
        cin>>seq[i];
    }
    cout<<"\nThe array: ";
    for(int i=0;i<n;i++)
    {
        cout<<seq[i]<<", ";
    }
    checksap(seq,n);
    checksgp(seq,n);
    return 0;
}
