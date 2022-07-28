//Math Tables generator using C by Vishruth Codes
#include<stdio.h>

void tables(int n, int s, int e)
{
    for(int i=s;i<=e;i++)
    {
        printf("\n%d x %d = %d",n,i,n*i);
    }
}

int main()
{
    int n,srange,erange;
    printf("\nEnter the Number: ");
    scanf("%d",&n);
    printf("\nEnter the starting range: ");
    scanf("%d",&srange);
    printf("\nEnter the ending range: ");
    scanf("%d",&erange);
    tables(n,srange,erange);
    return 0;
}
