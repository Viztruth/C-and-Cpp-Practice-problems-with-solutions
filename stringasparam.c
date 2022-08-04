//C program to pass string as parameter to a function | Vishruth Codes
#include<stdio.h>

void displaystr(char str[], int n)
{
    printf("\nThe string is: ");
    puts(str);
}

int main()
{
    int n;
    printf("\nEnter the size of the string: ");
    scanf("%d",&n);
    char str[n];
    getchar();
    printf("\nEnter the string: ");
    gets(str);
    displaystr(str,n);
    return 0;
}
