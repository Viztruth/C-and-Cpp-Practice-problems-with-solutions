#include <stdio.h>

int main()
{
    int u, l, s = 0;
    printf("Enter the upper range and lower range: ");
    scanf("%d %d", &u, &l);
    printf("u=%d, l=%d", u, l);
    for (int i = l; i <= u; i++)
    {
        s = s + i;
    }
    printf("\nThe sum is: %d", s);
}