#include <iostream>
#include <stdlib.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

class sll
{
private:
    node *first;

public:
    sll()
    {
        first = NULL;
    }
    sll(int ar[], int n);
    ~sll();

    void display();
    void insert();
    void deletion();
    int length();
};

// constructor to create the s.l.l
sll::sll(int ar[], int n)
{
    node *last, *p;
    first = new node;
    first->data = ar[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        p = new node;
        p->data = ar[i];
        p->next = NULL;
        last->next = p;
        last = p;
    }
    cout << "\nThe list is successfully created!";
}

// destructor to delete the entire s.l.l
sll::~sll()
{
    node *p = first;
    while (first)
    {
        first = first->next;
        delete (p);
        p = first;
    }
    cout << "\nThe destructor is successfully called!";
}

// display function
void sll::display()
{
    node *p;
    p = first;
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

// insert new element into the s.l.l
void sll::insert()
{
    // instead of ele, use index, check edge cases
    int n, x;
    node *p, *temp;
    cout << "\nThe linked list: ";
    display();
    cout << "\nEnter the index (0-" << length() - 1 << ") after which you'd like to insert: ";
    cin >> n;
    cout << "\nEnter the element: ";
    cin >> temp->data;
    temp->next = NULL;
    p = first;
    if (n < 0 || n > length())
    {
        cout << "\nInvalid Input!";
        return;
    }
    else
    {
        for (int i = 0; i <= n; i++)
        {
            p = p->next;
        }
        temp->next = p->next;
        p->next = temp;
        printf("\nThe element is successfully inserted!");
    }
}

// delete the element
void sll::deletion()
{
    node *temp, *p;
    int ele;
    temp = NULL;
    p = first;
    cout << "\nThe linked list: ";
    display();
    cout << "\nEnter the element's index (0-" << length() - 1 << ") you'd wish to remove: ";
    cin >> ele;
    if (ele < 0 || ele > length())
    {
        cout << "\nInvalid input";
    }
    else if (ele == 0)
    {
        first = p->next;
        free(p);
    }
    else
    {
        for (int i = 0; i <= ele; i++)
        {
            temp = p;
            p = p->next;
        }
        temp->next = p->next;
        free(p);
    }
}

// return the length of the s.l.l
int sll::length()
{
    node *p;
    int count = 0;
    p = first;
    while (p)
    {
        count++;
        p = p->next;
    }
    return count;
}

int main()
{
    int len = 5, n;
    int a[] = {1, 2, 3, 4, 5};
    sll sdf(a, len);
    cout << "\nThe List: ";
    sdf.display();
    while (1)
    {
        cout << "\n\nEnter -\n1. For insertion\n2. For deletion\n3. for length\n4. For Display\n5. for exit\n:- ";
        cin >> n;
        switch (n)
        {
        case 1:
        {
            sdf.insert();
            break;
        }
        case 2:
        {
            sdf.deletion();
            break;
        }
        case 3:
        {
            sdf.length();
            break;
        }
        case 4:
        {
            sdf.display();
            break;
        }
        case 5:
        {
            exit(0);
            break;
        }
        default:
        {
            cout << "\nInvalid input!";
        }
        }
    }
    return 0;
}