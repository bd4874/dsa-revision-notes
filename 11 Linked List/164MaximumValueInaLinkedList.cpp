// Maximum element in Linked List
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

int max(struct Node *p)
{
    int n = -322323;
    while (p != NULL)
    {
        if (p->data > n)
        {
            n = p->data;
            p = p->next;
        }
        else
            p = p->next;
    }
    return n;
}

int main()
{
    int A[] = {3, 5, 7, 10, 15};
    create(A, 5);
    display(first);
    int max1 = max(first);
    cout << "Max No.: " << max1 << endl;
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Node Elements are: 3 5 7 10 15 
Sum of elements of the Node: 40
*/