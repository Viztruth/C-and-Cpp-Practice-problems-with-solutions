//Program to add 2 matrices | Vishruth Codes
#include<stdio.h>

struct matrix
{
    int A[10][10];
    //dimensions of the array
    int r;
    int c;
};

//function to insert elements into the array
void insertmatrix(struct matrix *m)
{
    printf("\nEnter the elements row-major wise (separated by space): ");
    for(int i=0;i<m->r;i++)
    {
        for(int j=0;j<m->c;j++)
        {
            scanf("%d", &m->A[i][j]);
        }
    }
}

//Function to display the 2 to-be-multiplied arrays
void displaymatrix(struct matrix *m)
{
  for(int i=0;i<m->r;i++)
    {
        for(int j=0;j<m->c;j++)
        {
            printf("%d  ", m->A[i][j]);
        }
        printf("\n");
    }  
}

//Function to add the 2 arrays
void addition(struct matrix *m,struct matrix *n, int res[][10])
{
    for(int i=0;i<m->r;i++)
    {
        for(int j=0;j<m->c;j++)
        {
            res[i][j]=m->A[i][j]+n->A[i][j];
        }
    }
}

//function to display the result
void display(int res[][10],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d   ",res[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    struct matrix m;
    struct matrix n;
    int row,col;
    printf("\nEnter the dimension (row, column): ");
    scanf("%d %d", &row,&col);
    int res[10][10];
    m.r=row;m.c=col;
    n.r=row;n.c=col;
    printf("\nFor Array 1: ");
    insertmatrix(&m);
    printf("\nFor Array 2: ");
    insertmatrix(&n);
    printf("\n\nArray 1:\n");
    displaymatrix(&m);
    printf("\n\nArray 2:\n");
    displaymatrix(&n);
    addition(&m,&n,res);
    printf("\n\nThe result is:\n");
    display(res,row,col);
    return 0;
}
