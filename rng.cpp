//Random number generator by Vishruth Codes
#include<iostream>
#include<time.h>
using namespace std;

//Function to generate multiple random numbers
void rnos()
{
    int qty;
    cout<<"\nEnter the count: ";
    cin>>qty;
    srand(time(0));
    cout<<"The random nos. are: ";
    for(int i=0;i<qty;i++)
    {
        cout<<rand()<<", ";
    }
}

//Function to generate multiple random numbers which are multiples of a given number
void rnosmul(int n)
{
    int qty;
    cout<<"Enter the count: ";
    cin>>qty;
    srand(time(0));
    cout<<"The random nos. are: ";
    for(int i=0;i<qty;i++)
    {
        cout<<(rand()*n)<<", ";
    }
}

//Function to generate multiple random numbers of a given range
void rnosrang(int s,int e)
{
    int qty, rem;
    cout<<"Enter the count: ";
    cin>>qty;
    rem=e-s;
    cout<<"\nThe random nos. are: ";
    //Checking if the given count exceeds the count of possible nos. that can be generated within the given range
    if(rem<qty)
    {
        cout<<"\nINVALID Count!";
        exit(0);
    }
    else
    {
    srand(time(0));
    for(int i=0;i<qty;i++)
    {
        //Formula for generating random nos. whthin a give range = lower_limit + (rand()%(upper_limit - lower_limit))
        cout<<(s+(rand()%(e-s)))<<", "; 
    }
    }
}

int main()
{
    int n, mult, srang, erang;
    cout<<"\nSelect - \n1. for generating random numbers\n2. for generating random nos. which are multiples of a number.\n3. for generating random numbers belonging to a particular range.\n: - ";
    cin>>n;
    if(n==1)
        rnos();
    else if(n==2)
    {
        cout<<"\nEnter the number: ";
        cin>>mult;
        rnosmul(mult);
    }
    else if(n==3)
    {
        cout<<"\nEnter the starting & ending range: ";
        //Input lower limit and upper linit
        cin>>srang>>erang;
        rnosrang(srang,erang);
    }
    else{
        cout<<"\nInvalid Input";
        exit(0);
    }
    return 0;
}

