//Exploring different methods of passing parameters to functions by Vishruth Codes
#include<iostream>
using namespace std;

struct rectangle
{
    int len;
    int bre;
};

int main()
{
int n, are;
struct rectangle r;
cout<<"\nEnter the length: ";
cin>>r.len;
cout<<"\nEnter the breadth: ";
cin>>r.bre;
cout<<"\nHow do you wanna calculate the area (the results are same for all): ";
cout<<"\n\n1. pass by value\n2. pass by address\n3. pass by reference\n:- ";
cin>>n;
switch(n)
{
    case 1:{
        are = passbyvalue(r);
        cout<<"\nThe area is: "<<are;
        break;
    }
    case 2:{
        are = passbyaddress(&r);
        cout<<"\nThe area is: "<<are;
        break;
    }
    case 3:{
        are = passbyreference(r);
        cout<<"\nThe area is: "<<are;
        break;
    }
}
return 0;
}
