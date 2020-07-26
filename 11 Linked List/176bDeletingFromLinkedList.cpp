// Deleting node after given position.
// Author: REET

/*
There are two places where we can insert
the element.
    1.Deleting first node.
    2.Deleting node after given position.
*/

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
    cout << "New Node Elements are: ";
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void deleteNode(int position)
{
    struct Node *p;
    struct Node *q = NULL;
    p = first;
    for (int i = 0; i < position; i++)
    {
        q = p;
        p = p->next;
    }
    q->next = p->next;
    delete p;
}

int main()
{
    int A[] = {3, 5, 17, 10, 15};
    create(A, 5);
    display(first);
    deleteNode(1);
    display(first);
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
New Node Elements are: 3 5 17 10 15 
New Node Elements are: 3 17 10 15 
*/