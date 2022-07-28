//Random number generator by Vishruth Codes
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Function to generate multiple random numbers
void rnos()
{
    int qty;
    printf("\nEnter the count: ");
    scanf("%d",&qty);
    srand(time(0));
    printf("The random nos. are: ");
    for(int i=0;i<qty;i++)
    {
        printf("%d, ",rand());
    }
}

//Function to generate multiple random numbers which are multiples of a given number
void rnosmul(int n)
{
    int qty;
    printf("\nEnter the count: ");
    scanf("%d",&qty);
    srand(time(0));
    printf("The random nos. are: ");
    for(int i=0;i<qty;i++)
    {
        printf("%d, ",(rand()*n));
    }
}

//Function to generate multiple random numbers of a given range
void rnosrang(int s,int e)
{
    int qty, rem;
    printf("Enter the count: ");
    scanf("%d",&qty);
    rem=e-s;
    printf("\nThe random nos. are: ");
    //Checking if the given count exceeds the count of possible nos. that can be generated within the given range
    if(rem<qty)
    {
        printf("\nINVALID Count!");
        exit(0);
    }
    else
    {
    srand(time(0));
    for(int i=0;i<qty;i++)
    {
        //Formula for generating random nos. whthin a give range = lower_limit + (rand()%(upper_limit - lower_limit))
        printf("%d, ",(s+(rand()%(e-s)))); 
    }
    }
}

int main()
{
    int n, mult, srang, erang;
    printf("\nSelect - \n1. for generating random numbers\n2. for generating random nos. which are multiples of a number.\n3. for generating random numbers belonging to a particular range.\n: - ");
    scanf("%d",&n);
    if(n==1)
        rnos();
    else if(n==2)
    {
        printf("\nEnter the number: ");
        scanf("%d",&mult);
        rnosmul(mult);
    }
    else if(n==3)
    {
        printf("\nEnter the starting & ending range: ");
        //Input lower limit and upper linit
        scanf("%d",&srang);
        scanf("%d",&erang);
        rnosrang(srang,erang);
    }
    else{
        printf("\nInvalid Input");
        exit(1);
    }
    return 0;
}
