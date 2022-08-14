//Program to check whether the SLL is sorted or not | Vishruth codes
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
} *root=NULL;

//Function to append elements into the list
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

//Function to check whether the list is sorted or not
int checksort()
{
    int count=0;
    struct node *p,*q;
    q=root;
    p=q->next;
    while(p)
    {
        if(p->data<q->data)
        {
            count++;
            break;
        }
        q=q->next;
        p=p->next;
    }
    if(count==0)
    {
        return 0;
    }
    else{
        return 1;
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
    int len=5,chk;
    int ar[]={1,2,0,4,5};
    printf("\nThe array: 1,2,0,4,5");
    for(int i=0;i<len;i++)
    {
    create(ar[i]);
    }
    display();
    chk=checksort();
    if(chk==0)
    {
        printf("\nThe list is sorted.");
    }
    else
    {
        printf("\nThe list isn't sorted!");
    }
    return 0;
}