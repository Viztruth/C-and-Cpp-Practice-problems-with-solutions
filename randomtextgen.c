//Random Text generator | Vishruth Codes
//Can be used as captcha or automatic pasword generator
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int n,i=0,dec;
    printf("\nEnter the size: ");
    scanf("%d",&n);
    int text[n];
    srand(time(0));
    while(i<n)
    {
    //deciding whether the character is uppercase or lowercase or integer
    //0-lowercase, 1-uppercase, otherwise-integer
    dec=0+(rand()%(3-0));
        if(dec==0)
        {
            //insertion of lowercase
            text[i]=97+(rand()%(122-97));
        }
        else if(dec==1)
        {
            //insertion of uppercase
            text[i]=65+(rand()%(90-65));
        }
        else
        {
            //insertion of numbers
            text[i]=48+(rand()%(57-48));
        }
        i++;
    }
    printf("\nThe generated string: ");
    for(int i=0;i<n;i++)
    {
        //type-conversion from int to string
        printf("%c",text[i]);
    }
    return 0;
}
