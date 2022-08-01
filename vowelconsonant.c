//C program to count the vowels and consonants in a string | Vishruth codes
#include<stdio.h>
#include<string.h>

int main()
{
    int n,vcount=0, ccount=0;
    printf("\nEnter the size of the string: ");
    scanf("%d",&n);
    char str[n];
    getchar();
    printf("\nEnter the string: ");
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='e'|| str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A'|| str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vcount++;
        }
        else if((str[i])>65 && (str[i])<90 || (str[i]>97 && (str[i])<122))
        {
            ccount++;
        }
    }
    printf("\nThe no. of vowels and consonants is: %d, %d",vcount, ccount);
    return 0;
}
