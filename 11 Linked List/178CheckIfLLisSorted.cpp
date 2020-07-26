// Check if the link is sorted or not.
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

/*
Author: REET

void chkSort()
{
    int min = -99;
    struct Node *p = first;
    while (p != NULL && p->data > min)
    {
        min = p->data;
        p = p->next;
    }
    if (p!=NULL && min > p->next->data)
        cout << "Not Sorted..." << endl;
    else
        cout << "Sorted" << endl;
}
*/

string chkSort()
{
    int min = -32768;
    struct Node *p = first;
    while (p != NULL)
    {
        if (p->data < min)
            return "Not Sorted";
        min = p->data;
        p = p->next;
    }
    return "Sorted";
}

int main()
{
    int A[] = {3, 5, 7, 10, 15};
    create(A, 5);
    display(first);
    cout << chkSort() << endl;
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Node Elements are: 3 5 7 10 15 
Sorted 
*/