// Deletion from a c.l.l by Vishruth Codes
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
} * head;

// Function to append elements into c.l.l.
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

// function to display elements of c.l.l.
void display(struct node *h)
{
    struct node *p;
    p = h;
    do
    {
        printf("%d, ", p->data);
        p = p->link;
    } while (p != h);
}

// function to calculate the length of c.l.l.
int length(struct node *h)
{
    struct node *p;
    int count = 0;
    p = h;
    do
    {
        count++;
        p = p->link;
    } while (p != h);
    return count;
}

// Function to delete elements of c.l.l.
void delete (struct node *h, int pos)
{
    struct node *p;
    p = h;
    // if pos in not present in c.l.l
    if (pos < 0 || pos >= length(head))
    {
        printf("\nInvalid position!");
        return;
    }
    // if it's the starting position (head)
    else if (pos == 0)
    {
        do
        {
            p = p->link;
        } while (p->link != h);
        printf("%d is successfully deleted!", h->data);
        p->link = h->link;
        free(h);
        head = p->link;
    }
    else // for all other cases
    {
        struct node *l;
        for (int i = 0; i < pos; i++)
        {
            l = p;
            p = p->link;
        }
        printf("%d is successfully deleted!", p->data);
        l->link = p->link;
        free(p);
    }
}

int main()
{
    int len = 5, n;
    int ar[] = {1, 2, 3, 4, 5};
    append(ar, len);
    printf("\nThe c.l.l is: ");
    display(head);
    printf("\nEnter the location (0-%d) at which you wish to delete: ", length(head));
    scanf("%d", &n);
    delete (head, n);
    printf("\nThe c.l.l after deletion is: ");
    display(head);
}