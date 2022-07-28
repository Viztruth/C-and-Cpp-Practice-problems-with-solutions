//Program to write Integers in Expanded form by Vishruth Codes
#include<iostream>
using namespace std;

//Function to calculate the length of the integer
int lengthofinteger(int n)
{
    int count=0;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    return count;
}

//Function to split the integer into digits and store them in array at position corresponding to its power of 10.
void breakdown(int n,int len, int split[])
{
    int rem;
    for(int i=0;i<len;i++)
    {
        rem=n%10;
        if(n>0)
        {
        n=n/10;
        split[i]=rem;
        }
    }
}

int main()
{
    int n,len;
    //Input
    cout<<"\nEnter the number: ";
    cin>>n;
    len=lengthofinteger(n);
    cout<<"\nThe length of integer is: "<<len;
    int split[len];
    breakdown(n,len,&split[0]);

    //Output
    cout<<"\n\nInteger "<<n<<" expanded form is: ";
    for(int i=len-1;i>=0;i--)
    {
        int mul=1;
        for(int j=0;j<i;j++)
        {
            mul=mul*10;
        }
        if(i!=0)
        {
        cout<<split[i]<<"x"<<mul<<" + ";
        }
        else{
            cout<<split[i]<<"x"<<mul;
        }
    }
    return 0;
}
