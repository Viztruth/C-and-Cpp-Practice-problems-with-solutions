//Basic operations on singly linked list | Vishruth Codes
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*root=NULL;

//append or Insert at end of the list function.
void append()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the node data: ");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else{
        struct node *p;
        p=root;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
    }
}

//function to display the entire sll.
void display()
{
struct node *p;
p=root;
printf("\n\nThe linked list: ");
while(p!=NULL)
{
    printf("%d -> ",p->data);
    p=p->next;
}
}

//function to display length of sll.
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

//function to insert element at any given position.
void insert()
{
    int pos;
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    display();
    printf("\nEnter the position (1-n) after which you's like to insert (press '0' to insert at begin): ");
    scanf("%d",&pos);
    if(pos==length())
    {
        append();
    }
    else if(pos==0)
    {
        printf("\nEnter the node data: ");
        scanf("%d",&temp->data);
        temp->next=root;
        root=temp;
    }
    else{
        struct node *p;
        p=root;
        for(int i=0;i<pos-1;i++)
        {
            p=p->next;
        }
        printf("\nEnter the node data: ");
        scanf("%d",&temp->data);
        temp->next=p->next;
        p->next=temp;
    }
}

//function to delete the element at any given position.
void delete()
{
    int n;
    struct node *p,*q;
    display();
    printf("\nEnter the position (1-n) that you wish to remove: ");
    scanf("%d",&n);
    if(n==1)
    {
        p=root;
        root=p->next;
        printf("\n%d successfully deleted!",p->data);
        free(p);
    }
    else if(n==length())
    {
        p=root;
        for(int i=0;i<length()-2;i++)
        {
            p=p->next;
            q=p->next;
        }
        p->next=NULL;
        printf("\n%d successfully deleted!",q->data);
        free(q);
    }
    else{
        p=root;
        q=p->next;
        for(int i=0;i<n-2;i++)
        {
            q=q->next;
            p=p->next;
        }
        p->next=q->next;
        printf("\n%d successfully deleted!",q->data);
        free(q);
    }
}

int main()
{
    int n;
    while(1)
    {
    printf("\n\nEnter -\n1. for Append\n2. for insert\n3. for delete\n4. for length\n5. for display\n6. for Exit\n:- ");
    scanf("%d",&n);
    switch(n)
    {
        case 1: 
        {
            append();
            break;
        }
        case 2:
        {
            insert();
            break;
        }
        case 3:
        {
            delete();
            break;
        }
        case 4:
        {
            printf("\nThe length is %d",length());
            break;
        }
        case 5:
        {
            display();
            break;
        }
        case 6:
        {
            exit(1);
            break;
        }
        default:
        {
            printf("\nInvalid Input!");
        }
    }
}
return 0;
}