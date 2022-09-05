// program to check whether there's loop in a s.l.l
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} * root;

// creation of s.l.l
void append(int ar[], int n)
{
    struct node *temp, *last, *p;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = ar[0];
    temp->next = NULL;
    root = temp;
    last = temp;
    for (int i = 1; i < n; i++)
    {
        p = (struct node *)malloc(sizeof(struct node));
        p->data = ar[i];
        p->next = NULL;
        last->next = p;
        last = p;
    }
}

// displaying s.l.l
void display()
{
    struct node *p;
    p = root;
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

// calculating length of s.l.l
int length(struct node *f)
{
    struct node *p;
    p = f;
    int count = 0;
    while (p)
    {
        count++;
        p = p->next;
    }
    return count;
}

// creating a loop in s.l.l
void createloop()
{
    int ele;
    struct node *p, *last;
    p = root;
    last = root;
    printf("\nLook at the above created S.L.L!");
    printf("\nEnter the element to which you want the rear element to point to: ");
    scanf("%d", &ele);
    while (last->next != NULL)
    {
        if (ele == last->data)
        {
            p = last;
        }
        last = last->next;
    }
    if (p == root)
    {
        printf("\nThe element is not found!");
    }
    else
    {
        last->next = p;
        printf("\nThe loop is successfully created!");
    }
}

// checking whether there's loop
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

// print result
void printout(int n)
{
    if (n == 0)
    {
        printf("\nThere's no loop");
    }
    else if (n == 1)
    {
        printf("\nThere's loop");
    }
}

int main()
{
    int n = 5;
    int ar[] = {1, 3, 5, 7, 9};
    append(ar, n);
    printf("The created S.L.L: ");
    display();
    // at first there'll be no loop, display "There's no loop"
    printout(checkloop());
    createloop();
    // now a loop is created, display "There's loop"
    printout(checkloop());
    return 0;
}