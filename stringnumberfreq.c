// Program to print out the frequency of digits in a string of alphabets and numbers
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char num[1000];
    printf("\nEnter the string: ");
    scanf("%s", num);
    int count[10];
    for (int i = 0; i < 10; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; num[i] != '\0'; i++)
    {
        if (num[i] == '0')
        {
            count[0]++;
        }
        if (num[i] == '1')
        {
            count[1]++;
        }
        if (num[i] == '2')
        {
            count[2]++;
        }
        if (num[i] == '3')
        {
            count[3]++;
        }
        if (num[i] == '4')
        {
            count[4]++;
        }
        if (num[i] == '5')
        {
            count[5]++;
        }
        if (num[i] == '6')
        {
            count[6]++;
        }
        if (num[i] == '7')
        {
            count[7]++;
        }
        if (num[i] == '8')
        {
            count[8]++;
        }
        if (num[i] == '9')
        {
            count[9]++;
        }
    }
    printf("\nThe frequency of numbers is (0-9): ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", count[i]);
    }
    return 0;
}