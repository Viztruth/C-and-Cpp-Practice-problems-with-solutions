// C program to determine whether the no. is even or not
#include <stdio.h>

int main()
{
    int n;
    printf("\nEnter the number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("\nThe number is even.");
    }
    else
    {
        printf("\nThe number is odd.");
    }
}