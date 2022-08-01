//Program to determine whether th given array is in ascendng
// or descending order | Vishruth Codes
#include<stdio.h>

void ascordesc(int ar[],int n)
{
    int i=2,count;
    //comparing frst two elements to decide ascending or not.
    if(ar[0]<ar[1])
    {
        int count=0;
        while(i<n)
        {
            if(ar[i-1]>ar[i])
            {
                printf("\nThe array is unsorted starting from %d.", ar[i]);
                count++;
            }
            i++;
        }
        if(count==0)
        {
        printf("\nThe array sorted and is in ascending order.");
        }
    }
    else if(ar[0]>ar[1])
    {
        count=0;
        while(i<n)
        {
            if(ar[i-1]<ar[i])
            {
                printf("\nThe array is unsorted starting from %d.", ar[i]);
                count++;
            }
            i++;
        }
        if(count==0)
        {
        printf("\nThe array sorted and is in descending order.");
        }
    }
}

int main()
{
    int ar[10]={11,12,13,14,15,16,7,18,19,20};
    int n=10;//length of the array
    printf("\nThe array is: 11,12,13,14,15,16,7,18,19,20");
    ascordesc(ar,n);
    return 0;
}