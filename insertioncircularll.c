#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
} * head;

// appending the c.l.l.
void append(int a[], int n)
{
    struct node *temp, *last;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = a[0];
    head->link = head;
    last = head;
    for (int i = 1; i < n; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = a[i];
        temp->link = last->link;
        last->link = temp;
        last = temp;
    }
    printf("\nThe C.L.L is successfully created!");
}

// Displaying the c.l.l.
void display()
{
    struct node *p;
    p = head;
    do
    {
        printf("%d, ", p->data);
        p = p->link;
    } while (p != head);
}

// inserting at given position in c.l.l.
void insert(struct node *h, int pos, int ele)
{
    struct node *temp, *p;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = ele;
    temp->link = temp;
    p = h;
    if (pos != 0)
    {
        for (int i = 0; i < pos - 1; i++)
        {
            p = p->link;
        }
        temp->link = p->link;
        p->link = temp;
        printf("\nThe element is successfully inserted!");
        printf("\nThe c.l.l after insertion - ");
        display();
    }
    else
    {
        do
        {
            p = p->link;
        } while (p->link != h);
        temp->link = p->link;
        p->link = temp;
        head = temp;
        printf("\nThe c.l.l after insertion - ");
        display();
    }
}

int main()
{
    int len = 5, n, ele;
    char cho;
    int a[] = {1, 2, 3, 4, 5};
    append(a, len);
    printf("\nThe c.l.l is - ");
    display();
    printf("\nPress 'y' is you wish to insert element: ");
    scanf("%c", &cho);
    if (cho == 'y' || cho == 'Y')
    {
        printf("\nTake a look at the c.l.l - ");
        display();
        printf("\nEnter the position (0-n) where you wish to insert: ");
        scanf("%d", &n);
        printf("\nEnter the element: ");
        scanf("%d", &ele);
        insert(head, n, ele);
    }
    return 0;
}