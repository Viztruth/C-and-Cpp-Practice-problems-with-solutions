//Removing duplicates | Vishruth codes
#include<stdio.h>
#include<stdlib.h>

//Defining a node
struct node
{
    int data;
    struct node *link;
};
struct node *root=NULL;

//append function for linked list
int append(int n)
{
    int count=1;
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=n;
    temp->link=NULL;
    if(root==NULL)  //list is empty
    {
        root=temp;
    }
    else
    {
        struct node *p;
        p=root;
        while(p->link!=NULL)
        {
            p=p->link;
            count++;
        }
        p->link=temp;
    }
    return count;
}

//Function to determine whether the element is in the L.L or not
int search(int n)
{
    int count=0;
    struct node *p;
    p=root;
        while(p!=NULL)
        {
            if(p->data==n)
            {
                count++;
            }
            p=p->link;
        }
    return count;
}

//Function which compares the array element with the elements of the L.L
//Onlu unique elements are inserted into the L.L. Duplicates aren't allowed.
//Uses search() function to determine whether unique or duplicate.
void removingduplicates(int ar[], int n)
{
    int i=1, len;
    len=append(ar[0]);
    do
    {
        if(search(ar[i])==0)
        {
            append(ar[i]);
        }
        i++;
    }while(i<n);
}

//To display the linked list
void display()
{
    struct node *p;
    p=root;
    while(p!=NULL)
    {
        printf("%d, ",p->data);
        p=p->link;
    }
}

int main()
{
    //Hardcoding the array.
    int ar[]={2,4,5,5,7,9,11,14,17,17,17,20};
    printf("\nThe array: 2,4,5,5,7,9,11,14,17,17,17,20");
    int n=sizeof(ar)/sizeof(ar[0]);
    removingduplicates(ar,n);
    printf("\nThe array without duplicates: ");
    display();
    return 0;
}