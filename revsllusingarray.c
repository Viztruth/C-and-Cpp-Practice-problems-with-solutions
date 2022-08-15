//Program to reverse a linked list in C using an auxillary array | Vishruth codes
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
} *root=NULL;

//function to append into the list
void create(int d)
{
    struct node *temp,*p,*q;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=d;
    temp->next=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        p=root;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
    }
}

//function to calculate the length of the list
int length()
{
int count=0;
struct node *p;
    p=root;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    } 
    return count;
}

//function to display the list
void display()
{
    struct node *p;
    p=root;
    while(p!=NULL)
    {
        printf("%d -> ",p->data);
        p=p->next;
    }
}

//function to reverse the list
void revsll()
{
int ar[length()],i=0;
struct node *p;
p=root;
while(p)
{
    ar[i++]=p->data;
    p=p->next;
}
p=root;
i--;
while(p)
{
    p->data=ar[i--];
    p=p->next;
}
}

int main()
{
    int len=6;
    int ar[]={7,2,2,0,4,11};
    printf("\nThe array: 7,2,2,0,4,11");
    for(int i=0;i<len;i++)
    {
    create(ar[i]);
    }
    printf("\nThe linked list: ");
    display();
    printf("\nThe reversed S.L.L. is: ");
    revsll();
    display();
    return 0;
}