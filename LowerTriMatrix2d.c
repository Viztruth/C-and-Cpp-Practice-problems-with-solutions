//Program to create and display lower triangular matrix using 2d array
//Vishruth codes
#include<stdio.h>

struct matrix
{
    int A[10][10];
    //dimension of the current matrix
    int n;
};

//to set the elements of the matrix
void set(struct matrix *m,int x[], int count)
{
    int totele=0;
    for(int i=0;i<m->n;i++)
    {
    for(int j=0;j<m->n;j++)
    {
    //If the symbol's reversed i.e. i<=j, then you get upper triangular matrix
    if(i>=j)
    {
        if(totele<count)
        {
        m->A[i][j]=x[totele++];
        }
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
            printf("%d  ",m.A[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    struct matrix m;
    printf("\nEnter the dimension: ");
    scanf("%d",&m.n);
    //count of non zerp elements in a lower triangular matrix is sum of
    //first n terms of dimension
    int totele=((m.n)*(m.n+1))/2;
    int str[totele];
    printf("\nEnter the elements row-major wise (separated by space): ");
    for(int i=0;i<totele;i++)
    {
        scanf("%d",&str[i]);
    }
    //setting up the matrix
    set(&m,str,totele);
    //display the matrix
    display(m);
    return 0;
}