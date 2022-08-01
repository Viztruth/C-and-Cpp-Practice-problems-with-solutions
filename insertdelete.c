//Program to insert and delete elements into the array | Vishruth codes
#include<stdio.h>
#include<stdlib.h>

int displayed(int a[], int n)
{
    printf("\nThe array: ");
    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        {
            printf("%d.",a[i]);
        }
        else
        {
           printf("%d, ",a[i]); 
        }
    }

}

void insertion(int a[], int n)
{
int pos,ele;
printf("\nEnter the position (0-%d): ",n-1);
scanf("%d", &pos);
if(pos>=n || pos<0)
{
    printf("\nInvalid position.");
}
else{
    printf("\nEnter the element: ");
    scanf("%d", &ele);
    printf("%d is kicked oy of the array.\n",a[n-1]);
    for(int i=n-1;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=ele;
}
}

void deletion(int a[], int *n)
{
int pos;
printf("\nEnter the position (0-%d): ",*n-1);
scanf("%d",&pos);
if(pos>=*n || pos<0)
{
    printf("\nInvalid position.");
}
else{
    for(int i=pos;i<*n;i++)
    {
        a[i]=a[i+1];
    }
    --(*n);
}
}

int main()
{
    int cc;
    int n=10;
    int len;
    int ar[10]={11,22,33,44,55,66,77,88,99,110};
    displayed(ar,n);
    printf("\nThe length of array is: %d", n);
    printf("\n\nEnter - \n1. for Insertion\n2. for Deletion\n3. for Exit\n:=  ");
    scanf("%d",&cc);
    switch(cc)
    {
        case 1:
        {
            insertion(ar,n);
            displayed(ar,n);
            printf("\nThe length of array is: %d", n);
            break;
        }
        case 2:
        {
           deletion(ar,&n);
           displayed(ar,n);
            printf("\nThe length of array is: %d", n);
            break; 
        }
        case 3:
        {
            exit(0);
            break;
        }
        default: 
        {
            printf("\nInvalid Input!");
        }
    }
    return 0;
}