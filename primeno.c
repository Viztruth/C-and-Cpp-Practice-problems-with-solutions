// Program to determine whether the no. is prime or not
#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("\nEnter the no.: ");
    scanf("%d", &n);
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("\nPrime no.");
    }
    else
    {
        printf("\nNot a prime no.");
    }
    return 0;
}
