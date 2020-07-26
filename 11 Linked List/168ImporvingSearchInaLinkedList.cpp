// Improving Searching element in LL
// Author: REET

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} * first;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p)
{
    cout << "Node Elements are: ";
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void search(struct Node *p, int n)
{
    int count = 0;
    struct Node *q = NULL;
    while (p != 0)
    {
        if (p->data == n)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            count++;
            cout << "Element is at Position: " << count << endl;
            break;
        }
        else
        {
            q = p;
            p = p->next;
            count++;
        }
    }
}

int main()
{
    int A[] = {3, 5, 17, 10, 15};
    create(A, 5);
    display(first);
    search(first, 17);
    display(first);
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Node Elements are: 3 5 17 10 15 
Element is at Position: 3
Node Elements are: 17 3 5 10 15 
*/