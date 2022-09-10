#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} * root;

// creation of a cll;
// N:- in cll, you can't have NULL
void create(int ar[], int n)
{
    struct node *last, *p;
    root = (struct node *)malloc(sizeof(struct node));
    root->data = ar[0];
    root->next = root;
    last = root;
    for (int i = 1; i < n; i++)
    {
        p = (struct node *)malloc(sizeof(struct node));
        p->data = ar[i];
        p->next = last->next;
        last->next = p;
        last = p;
    }
    printf("\nThe c.l.l is successfully created!");
}

// displaying cll
void display(struct node *p)
{
    do
    {
        printf("%d ", p->data);
        p = p->next;
    } while (p != root);
}

// displaying cll using recursion
void displayrec(struct node *p)
{
    static int flag = 0;
    if (p != root || flag == 0)
    {
        flag = 1;
        printf("%d ", p->data);
        displayrec(p->next);
    }
    flag = 0;
}

// checking for the loop
int checkloop()
{
    struct node *p, *q;
    p = root;
    q = root;
    do
    {
        p = p->next;
        q = q->next;
        if (q != NULL)
        {
            q = q->next;
        }
        else
        {
            q = NULL;
        }
    } while (p && q && p != q);
    return p == q ? 1 : 0;
}

int main()
{
    int len = 5;
    int a[] = {1, 2, 3, 4, 5};
    create(a, len);
    printf("\nThis should display a no. of loops present: %d", checkloop());
    printf("\nThe c.l.l is: ");
    display(root);
    printf("\nThe c.l.l. using recursion: ");
    displayrec(root);
    return 0;
}