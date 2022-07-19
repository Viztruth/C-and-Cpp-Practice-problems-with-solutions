#include<iostream>
#include<math.h>
using namespace std;

int checks(int ar[], int n)
{
int sub,count=0;
sub=ar[1]-ar[2];
for(int i=2;i<n;i++)
{
    if((ar[i]-ar[i-1])!=sub)
    {
        count++;
    }
}
if(count==0)
{
    return 0;
    exit(1);
}
int div=ar[1]%ar[0];
for(int i=2;i<n;i++)
{
    if((ar[i]%ar[i-1])!=div)
    {
        count++;
    }
}
if(count==0)
{
    return 1;
    exit(1);
}
return 3;
}

int main()
{
    int seq[4],res,n;
    cout<<"\nEnter n: ";
    cin>>n;
    cout<<"\nEnter the first 4 terms of the sequence: ";
    for(int i=0;i<4;i++)
    {
        cin>>seq[i];
    }
    res=checks(seq,n);
    cout<<"\nThe following sequence is in: ";
    if(res==0)
        cout<<"Arithmetic Progression.";
    else if(res==1)
        cout<<"Geometric progression.";
    //else if(res==2)
        //cout<<"Harmonic Progression.";
    else cout<<"\nNot in any progression";
}