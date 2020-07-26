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

struct Node *insert(struct Node *first, int data)
{

    struct Node *n = new Node;
    n->data = data;
    n->next = first;
    first = n;
    return first;
}

int main()
{
    int A[] = {3, 5, 17, 10, 15};
    create(A, 5);
    display(first);
    display(insert(first, 28));
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Node Elements are: 3 5 17 10 15 
Node Elements are: 28 3 5 17 10 15
*/