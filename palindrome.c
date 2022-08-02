//Check whether a string is palindrome or not | Vishruth codes
#include<stdio.h>
#include<string.h>

int main()
{
    int n,count=0;
    printf("\nEnter the size of the string: ");
    scanf("%d",&n);
    char str[n];
    getchar();
    printf("\nEnter the string (all in same case): ");
    gets(str);
    for(int i=0;i<n/2;i++)
    {
        if(str[i]!=str[n-1-i])
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("\nThe string is a palindrome.");
    }
    else
    {
        printf("\nThe string is not a palindrome.");
    }
    return 0;
}