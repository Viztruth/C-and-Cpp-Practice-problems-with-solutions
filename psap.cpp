//Exploring different methods of passing parameters to functions by Vishruth Codes
#include<iostream>
using namespace std;

int passbyvalue(int l, int r)
{
    return l*r;
}

int passbyaddress(int *l,int *r)
{
    return (*l)*(*r);
}

int passbyreference(int &l, int &b)
{
    return l*b;
}
    
int main()
{
int n, are,l,b;
cout<<"\nEnter the length: ";
cin>>l;
cout<<"\nEnter the breadth: ";
cin>>b;
cout<<"\nHow do you wanna calculate the area (the results are same for all): ";
cout<<"\n\n1. pass by value\n2. pass by address\n3. pass by reference\n:- ";
cin>>n;
switch(n)
{
    case 1:{
        are = passbyvalue(l,b);
        cout<<"\nThe area is: "<<are;
        break;
    }
    case 2:{
        are = passbyaddress(&l,&b);
        cout<<"\nThe area is: "<<are;
        break;
    }
    case 3:{
        are = passbyreference(l,b);
        cout<<"\nThe area is: "<<are;
        break;
    }
}
return 0;
}
