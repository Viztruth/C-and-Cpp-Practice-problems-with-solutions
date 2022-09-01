#include <stdio.h>

int main()
{
    int n;
    printf("\nEnter the number: ");
    scanf("%d", &n);
    if (n >= 0)
    {
        if (n == 0)
        {
            printf("\nThe no. is zero.");
        }
        else
            printf("\nThe no. is positive.");
    }
    else
    {
        printf("\nThe number is negative.");
    }
}