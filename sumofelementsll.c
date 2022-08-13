//Sum of all elements in a sll
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
    while(p) //=> while(p!=NULL)
    {
        printf("%d -> ",p->data);
        p=p->next;
    }
}

//function to all the elements into the list
int addition()
{
    int sum=0;
    struct node *p;
    p=root;
    while(p)
    {
        sum=sum+p->data;
        p=p->next;
    }
    return sum;
}

int main()
{
    int len=6,sum;
    int ar[]={1,3,5,7,9,11};
    append(ar,len);
    display();
    sum=addition();
    printf("\nThe sum: %d", sum);
    return 0;
}
