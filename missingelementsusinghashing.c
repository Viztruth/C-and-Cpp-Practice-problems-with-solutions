//C Program to find the missing elements in an unsorted array of natural numbers using hashing
#include<stdio.h>

void hashing(int ar[], int n, int h)
{
    //declare an array 'arr' of size equal to largest element of 'ar'
    int arr[h];
    //initialize all elements of 'arr' to zero.
    for(int i=0;i<h;i++)
    {
        arr[i]=0;
    }
    //for 'arr',increment by 1 at indexes equal to value of elements in 'ar'
    for(int j=0;j<n;j++)
        {
            arr[ar[j]]++;
        }
    //The missing elements in 'ar' are the indices with element 0 stored in it.
    printf("\nThe missing elements are: ");
    for(int i=0;i<h;i++)
    {
        if(arr[i]==0)
        {
            printf("%d, ",i);
        }
    }
}

int main()
{
    int ar[]={5,8,1,16,3,15,11,13,7,8};
    int l=1;//smallest element
    int h=16;//largest element
    int n=sizeof(ar)/sizeof(ar[0]);
    hashing(ar,n,h);
    return 0;
}
