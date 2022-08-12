//Displaying the elements of linked list using recursion | Vishruth codes
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*root=NULL;

void create(int ar[], int n)
{
    struct node *last,*temp;
    root=(struct node*)malloc(sizeof(struct node));
    root->data=ar[0];
    root->next=0;
    last=root;
    for(int i=1;i<n;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=ar[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}

void display(struct node *p)
{
    if(p!=NULL)
    {
        printf("%d -> ",p->data);
        display(p->next);
    }
}

int main()
{
    int len=5;
    int ar[]={1,2,3,4,5};
    printf("\nThe array: 1,2,3,4,5.");
    create(ar,len);
    printf("\nThe linked list: ");
    display(root);
    return 0;
}