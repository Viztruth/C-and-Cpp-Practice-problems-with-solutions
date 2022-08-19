//Program to concatenate 2 S.L.L 
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

//function to create a linked list
struct node * append(int ar[],int n)
{
    struct node *first,*last,*p;
    first=(struct node*)malloc(sizeof(struct node));
    first->data=ar[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        p=(struct node*)malloc(sizeof(struct node));
        p->data=ar[i];
        p->next=NULL;
        last->next=p;
        last=p;
    }
    return first;
}

//function to concatenate a linked list
struct node * concatenate(struct node *a, struct node *b)
{
    struct node *p;
    p=a;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=b;
    return a;
}

//function to display a list
void display(struct node *a)
{
    struct node *p;
    p=a;
    while(p)
    {
        printf("%d -> ", p->data);
        p=p->next;
    }
}

int main()
{
    int l1=5,l2=6;
    int ai[]={1,2,3,4,5};
    struct node *a=append(ai,l1);
    printf("\nThe list a: ");
    display(a);
    int bi[]={6,7,8,9,10,11};
    struct node *b=append(bi,l2);
    printf("\nThe list a: ");
    display (b);
    //list 'a' & 'b' will be concatenated and result will be in 'res'.
    struct node *res=concatenate(a,b);
    //displaying the result
    printf("\nThe resultant list res: ");
    display(res);
    return 0;
}