#include <stdio.h>

int hcf(int m, int n)
{
    int r, l, s;
    if (m > n)
    {
        l = m;
        s = n;
    }
    else
    {
        l = n;
        s = m;
    }
    while (s != 0)
    {
        r = l % s;
        l = s;
        s = r;
    }
    return l;
}

int main()
{
    int m, n;
    printf("\nEnter the 2 nos: ");
    scanf("%d %d", &m, &n);
    printf("The HCF of %d and %d is %d", m, n, hcf(m, n));
    return 0;
}