// Display Linked List
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

void Display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }
}

void RDisplay(struct Node *p)
{
    if (p != NULL)
    {
        cout << p->data << endl;
        RDisplay(p->next);
    }
}

int main()
{
    int A[] = {3, 5, 7, 10, 15};
    create(A, 5);

    cout << "Using Iterative Method" << endl;
    Display(first);

    cout << "Using Recursive Method" << endl;
    RDisplay(first);
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Using Iterative Method
3
5
7
10
15
Using Recursive Method
3
5
7
10
15
*/