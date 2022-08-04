//Program to create and display diagonal matrix
#include<stdio.h>

struct matrix
{
    int A[10];
    //dimension of the current matrix
    int n;
};

//to set the elements of the matrix
void set(struct matrix *m,int i, int j, int x)
{
    if(i==j)
    {
        m->A[i-1]=x;
    }
}

//just to get single elements from matrix
int get(struct matrix m,int i, int j)
{
    if(i==j)
    {
        return (m.A[i-1]);
    }
    else
    {
        return 0;
    }
}

//to display the elements of the matrix
void display(struct matrix m)
{
    printf("\nThe elements are:\n");
    for(int i=0;i<m.n;i++)
    {
        for(int j=0;j<m.n;j++)
        {
            if(i==j)
            {
                printf(" %d",m.A[i]);
            }
            else
            {
                printf(" 0");
            }
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
    printf("\nThe elements are: ");
    for(int i=0;i<m.n;i++)
    {
        printf("%d, ",str[i]);
    }
    //setting up the matrix
    for(int i=0;i<m.n;i++)
    {
        set(&m,i+1,i+1,str[i]);
    }
    //display the matrix
    display(m);
    return 0;
}