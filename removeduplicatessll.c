//Program to remove duplicates linked list in C | Vishruth codes
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
} *root=NULL;

//function to append elements into the list
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
        while(p && p->data<d)
        {
            q=p;
            p=p->next;
        }
        if(p==root)
        {
            temp->next=root;
            root=temp;
        }
        else{
            temp->next=q->next;
            q->next=temp;
        }
    }
}

//function to remove duplicates
void removedupli()
{
    struct node *p,*q;
    q=root;
    p=q->next;
    while(p)
    {
        if(q->data==p->data)
        {
            q->next=p->next;
            free(p);
            p=q->next;
        }
        q=q->next;
        p=p->next;
    }
}

//function to display the list
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
    int len=6;
    int ar[]={7,2,2,0,4,11};
    printf("\nThe array: 7,2,2,0,4,11");
    for(int i=0;i<len;i++)
    {
    create(ar[i]);
    }
    display();
    printf("\nThe SLL after removing the duplicates are: ");
    removedupli();
    display();
    return 0;
}