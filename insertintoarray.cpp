//C++ program to insert elements into the array using static and dynamic array by Vishruth codes
#include<iostream>
using namespace std;

//Creation of template function displayed
template <typename t>
void displayed(t a[], int n)
{
    cout<<"\nThe elements of the array are: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<", ";
    }
}

//Creation of template function staticarray
template <typename t>
void staticarray(int n)
{
    //declaring a dynamic array 'ar' of size n
    t ar[n];
    cout<<"\nEnter the "<<n<<" elements (separated by a space): ";
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    displayed(ar,n);
}

//Creation of template function dynamicarray
template <typename t>
void dynamicarray(int n)
{
    //declaring a dynamic array 'p' of size n
    t *p=new t[n];
    cout<<"\nEnter the "<<n<<" elements (separated by a space): ";
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    displayed(p, n);
    //deleting the dynamic array to prevent memory leak
    delete []p;
}

int main()
{
    int n,ch;
    cout<<"\nEnter the size of the array: ";
    cin>>n;
    cout<<"\nEnter -\n1. for static array\n2. for dynamic array\n:- ";
    cin>>ch;
    switch(ch)
    {
        case 1: 
        {
            //declaring the datatype that the function 'staticarray' will receive
            staticarray<char>(n);
            break;
        }
        case 2:
        {
            //declaring the datatype that the function 'dynamicarray' will receive
            dynamicarray<char>(n);
            break;
        }
        default:
        {
            cout<<"\nInvalid input!";
            exit(0);
        }
    }
}

