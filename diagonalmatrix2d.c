//Program to create and display diagonal matrix using 2d array
//Vishruth codes
#include<stdio.h>

struct matrix
{
    int A[10][10];
    //dimension of the current matrix
    int n;
};

//to set the elements of the matrix
void set(struct matrix *m,int x[])
{
    for(int i=0;i<m->n;i++)
    {
    for(int j=0;j<m->n;j++)
    {
    if(i==j)
    {
        m->A[i][j]=x[i];
    }
    else
    {
        m->A[i][j]=0;
    }
    }
    }
}

//just to get single elements from matrix
int get(struct matrix m,int i, int j)
{
    return (m.A[i][j]);
}

//to display the elements of the matrix
void display(struct matrix m)
{
    printf("\nThe elements are:\n");
    for(int i=0;i<m.n;i++)
    {
        for(int j=0;j<m.n;j++)
        {
            printf("%d ",m.A[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    struct matrix m;
    printf("\nEnter the dimension: ");
    scanf("%d",&m.n);
    int str[m.n];
    printf("\nEnter the diagonal elements (separated by space): ");
    for(int i=0;i<m.n;i++)
    {
        scanf("%d",&str[i]);
    }
    //setting up the matrix
    set(&m,str);
    //display the matrix
    display(m);
    return 0;
}