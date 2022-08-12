//Program to rean an array into linked list in C | Vishruth codes
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
} *root=NULL;

void create(int d)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=d;
    temp->next=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        struct node *p;
        p=root;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
    }
}

void display()
{
    struct node *p;
    p=root;
    printf("\nThe linked list: ");
    while(p!=NULL)
    {
        printf("%d -> ",p->data);
        p=p->next;
    }
}

int main()
{
    int len=5;
    int ar[]={1,2,3,4,5};
    printf("\nThe array: 1,2,3,4,5");
    for(int i=0;i<len;i++)
    {
    create(ar[i]);
    }
    display();
    return 0;
}