//Printing missing elements in a sorted array of natural numbers
#include<stdio.h>

//Function to find the missing elements
void missi(int ar[], int n)
{
    int diff=ar[0]-0; //diff=a[i]-i
    printf("\nThe missing elements are: ");
    for(int i=0;i<n;i++)
    {
        if(ar[i]-i!=diff)//missing element spotted
        {
            while(diff<ar[i]-i)//printing all the missing elements located inbetween
            {
                printf("%d, ", i+diff);
                diff++;
            }
        }
    }
}

int main()
{
    int n;
    int ar[]={1,2,3,5,6,9,10};
    n=sizeof(ar)/sizeof(ar[0]);
    printf("\nThe array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d, ",ar[i]);
    }
    missi(ar,n);
}