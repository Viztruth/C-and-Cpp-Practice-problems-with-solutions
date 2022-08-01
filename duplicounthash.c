//Counting the duplicate elements using hashing by Vishruth codes. Time complexity: O(n)
#include<stdio.h>

void hash(int a[], int n,int l)
{
int ar[l];//hash table
for(int i=0;i<=l;i++)
{
    ar[i]=0;
}
for(int i=0;i<n;i++)
{
    ar[a[i]]++;
}
printf("The duplicate elements");
for(int i=0;i<=l;i++)
{
    if(ar[i]>1)
    {
        printf("\n%d is present %d times.",i, ar[i]);
    }
}
}

int main()
{
    int ar[10]={9,6,10,3,6,6,7,10,9,3},n=10;
    //determining the largest element
    int l=10;
    printf("\nThe array is: 9,6,10,3,6,6,7,10,9,3");
    hash(ar,n,l);
    return 0;
}