//Check whether the strings are anagram or not using hashing | Vishruth codes
#include<stdio.h>

int main()
{
    int count=0;
    char str1[]="stressed";
    char str2[]="dessert";
    printf("\nThe 2 strings are %s & %s.",str1,str2);
    int hash[26]={0};
    int j=0;
    for(int i=0;str1[i]!='\0';i++)
    {
        hash[str1[i]-97]+=1;
    }
    for(j=0;str2[j]!='\0';j++)
    {
        hash[str2[j]-97]-=1;
        if(hash[str2[j]-97]<0)
        {
            //if <0, that word in str2 wasn't present in str1, hence not anagram
            printf("\nNot an anagram.");
            break;
        }
    }
    //For presence of duplicate elements
    for(int i=0;i<26;i++)
    {
        if(hash[i]>0 || hash[i]<0)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("\nIt's an anagram.");
    }
    else{
        printf("\nNot an anagram.");
    }
    return 0;
}