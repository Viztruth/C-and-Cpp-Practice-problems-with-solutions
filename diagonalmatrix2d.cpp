//Program to create and display diagonal matrix using 2d array
//Vishruth codes
#include<iostream>
#include<stdio.h>
using namespace std;

class Matrix
{
    private:
    int A[10][10];
    //dimension of the current matrix
    int n;
    public: 

//to set the elements of the matrix
//Constructor
Matrix(int x[],int dim)
{
    n=dim;
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<n;j++)
    {
    if(i==j)
    {
        A[i][j]=x[i];
    }
    else
    {
        A[i][j]=0;
    }
    }
    }
}

//just to get single elements from matrix
int get(int i, int j)
{
    return (A[i][j]);
}

//to display the elements of the matrix
void display()
{
    cout<<"\nThe elements are:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<A[i][j]<<" ";
        }
        printf("\n");
    }
}

~Matrix()
{ 
    cout << "\nDestructor called.\n"; 
}

};

int main()
{
    cout<<"\n--| Diagonal matrix in C++ |--";
    int n;
    cout<<"\n\nEnter the dimension: ";
    cin>>n;
    int str[n];
    cout<<"\nEnter the diagonal elements (separated by space): ";
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    //setting up the matrix
    Matrix m(str,n);
    //display the matrix
    m.display();
    return 0;
}