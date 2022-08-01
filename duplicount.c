//program to count the duplicate elements in the array
#include<stdio.h>
#include<stdlib.h>

void chkdupli(int a[], int n)
{
    int chk[n/2];
    for(int i=0;i<n-1;i++)
    {
        int count=1;
        if(a[i]!=-1)
        {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                a[j]=-1;
            }
        }
        if(count>1)
        {
        printf("\n%d is present %d times.",a[i], count);
        }
    }
    }
}

int main()
{
    int ar[10]={9,6,10,3,6,6,7,10,9,3};
    printf("\nThe array: 9,6,10,3,6,6,7,10,9,3");
    int n=sizeof(ar)/sizeof(ar[0]);
    chkdupli(ar,n);
    return 0;
}