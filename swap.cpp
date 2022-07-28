//Different types of parameter passing in C++ by Vishruth Codes
//Pass by address
#include<iostream>
using namespace std;

//Function to swap two numbers
void swap(int *r, int *s)
{
    *r=*r+*s;
    *s=*r-*s;
    *r=*r-*s;
    cout<<"\nIn swap function, the value of a & b is: "<<*r<<" "<<*s;
    cout<<"\nThe address of variables within swap function is: "<<&r<<" "<<&s;
}


int main()
{
    int a,b;
    cout<<"\nEnter the value of a & b: ";
    cin>>a>>b;
    swap(&a,&b);
    cout<<"\n\nAfter calling swap, the value of a & b in main() is: "<<a<<" "<<b;
    cout<<"\nThe address of variables within main() function is: "<<&a<<" "<<&b;
   return 0;
}
