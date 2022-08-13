//Different types of parameter passing in C by Vishruth Codes
//Pass by address
#include<stdio.h>

//Function to swap two numbers
void swap(int *r, int *s)
{
    *r=*r+*s;
    *s=*r-*s;
    *r=*r-*s;
}


int main()
{
    int a,b;
    printf("\nEnter the value of a & b: ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("\n\nAfter calling swap, the value of a & b in main() is: %d %d",a,b);
   return 0;
}
