// sum and product in A.P. by Vishruth Codes
#include<iostream>
#include<cmath>
using namespace std;

//Function to determine the 3 consecutive nos
void solve(int s, int p)
{
    int a,d, num1,num2,num3;
    a=s/3;
    d=sqrt((a*a*a-p)/a);
    num1=a;
    num2=a-d;
    num3=a+d;
    cout<<"\nThe 3 numbers are: "<<num1<<", "<<num2<<", "<<num3<<".";
}

int main()
{
    int sum, pro;
    cout<<"\nEnter the sum of 3 CONSECUTIVE terms: ";
    cin>>sum;
    cout<<"\nEnter the product of those 3 terms: ";
    cin>>pro;
    solve(sum,pro);
    return 0;
}
