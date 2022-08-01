//Program to count the no. of words in a string | Vishruth Codes
#include<stdio.h>
#include<string.h>

int main()
{
    int n,count=1;
    printf("\nEnter the size of the string: ");
    scanf("%d",&n);
    char str[n];
    getchar();
    printf("\nEnter the string: ");
    gets(str);
    for(int i=1;str[i]!='\0';i++)
    {
        if(str[i]==' ' && str[i-1]!=' ')
        {
            count++;
        }
    }
    printf("\nThe no. of words is: %d", count);
    return 0;
}