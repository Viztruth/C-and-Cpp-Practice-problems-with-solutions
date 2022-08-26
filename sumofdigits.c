//Program to caulate sum of n digits of a number
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
  //no. of digits=5
    int n,sum=0,digits=5;
  //getting the input
    scanf("%d", &n);
    for(int i=0;i<digits;i++)
    {
       sum=sum+n%10;
       n=n/10; 
    }
    printf("%d", sum);
    return 0;
}
