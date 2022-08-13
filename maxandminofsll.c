//max and min element in sll
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
} *root=NULL;

//function to append the elements into the list
void append(int ar[], int n)
{
    struct node *last,*p;
    root=(struct node *)malloc(sizeof(struct node));
    root->data=ar[0];
    root->next=NULL;
    last=root;
    for(int i=1;i<n;i++)
    {
        p=(struct node *)malloc(sizeof(struct node));
        p->data=ar[i];
        p->next=NULL;
        last->next=p;
        last=p;
    }
}

//sunction to display the list
void display()
{
    printf("\nThe array into SLL: ");
    struct node *p;
    p=root;
    while(p)
    {
        printf("%d -> ",p->data);
        p=p->next;
    }
}

//function to find the max & min element in the list
int maxmin()
{
    int max,min;
    struct node *p;
    p=root;
    max=p->data;
    min=p->data;
    while(p)
    {
        if(max<p->data)
        {
            max=p->data;
        }
        if(min>p->data)
        {
            min=p->data;
        }
        p=p->next;
    }
    //print min element cos we can return only one value
    printf("\nThe min element: %d", min);
    //return max value
    return max;
}

int main()
{
    int len=6,max;
    int ar[]={1,3,5,27,9,11};
    append(ar,len);
    display();
    max=maxmin();
    printf("\nThe max element: %d", max);
    return 0;
}