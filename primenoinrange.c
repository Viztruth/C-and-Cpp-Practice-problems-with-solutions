// Program to print prime nos in a range
#include <stdio.h>
int main()
{
    int u, l;
    printf("Enter the lower and upper range: ");
    scanf("%d %d", &l, &u);
    if (l == 1)
    {
        l = l + 1;
    }
    printf("\nThe prime nos are: ");
    for (int i = l; i <= u; i++)
    {
        int count = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}