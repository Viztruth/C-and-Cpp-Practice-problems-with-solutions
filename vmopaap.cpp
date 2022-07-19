//Various methods of paasing array as parameter - 
#include<iostream>
using namespace std;

void passingarrayaspointer(int *ar, int n)
{
for(int i=0;i<n;i++)
{
    cout<<"\n#"<<i;
    cout<<"\nEnter the element: ";
    cin>>ar[i];
}
}

void passingarrayaspointertoanarray(int ar[],int n)
{
for(int i=0;i<n;i++)
{
    cout<<"\n#"<<i;
    cout<<"\nEnter the element: ";
    cin>>ar[i];
}
}

int * creatingarrayonfunction(int n)
{
    int * p;
    //malloc in 'c' is new in 'c++'
    p=new int[n];
    for(int i=0;i<n;i++)
    {
    cout<<"\n#"<<i;
    cout<<"\nEnter the element: ";
    cin>>p[i];
    }
    return (p);
}

int main()
{
    int n, ch;
    cout<<"\nEnter the size of an array: ";
    cin>>n;
    int array[n],*a;
    cout<<"\nEnter how you want the array to be created -\n1. by pointer\n2. by pointer to an array\n3. by creating array inside a function\n4. Exit\n:- ";
    cin>>ch;
    switch(ch)
    {
        case 1:{ 
                passingarrayaspointer(array, n);
                cout<<"\nThe array: ";
                for(int i=0;i<n;i++)
                {
                    cout<<" "<<array[i];
                }
                break;
        }
        case 2:{
    passingarrayaspointertoanarray(array,n);
    cout<<"\nThe array: ";
                for(int i=0;i<n;i++)
                {
                    cout<<" "<<array[i];
                }
    break;
        }
        case 3:{
    a=creatingarrayonfunction(n);
    cout<<"\nThe array: ";
                for(int i=0;i<n;i++)
                {
                    cout<<" "<<a[i];
                }
    break;
    }
    case 4: exit(0);
    default: {
        cout<<"\nInvalid input.";
        exit(0);
    }
    }
}