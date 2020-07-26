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

// void insertSort(int num)
// {
//     struct Node *p = first;
//     struct Node *q = NULL;
//     struct Node *t = new Node;
//     t->data = num;
//     while (p != NULL)
//     {
//         if ((p->data) > num)
//         {
//             t->next = q->next;
//             q->next = t;
//         }
//         else
//         {
//             q = p;
//             p = p->next;
//         }
//     }
// }

void insertSort(int num)
{
    struct Node *p = first;
    struct Node *q = NULL;
    struct Node *t = new Node;
    t->data = num;
    while (p && p->data < num)
    {
        q = p;
        p = p->next;
    }
    t->next = q->next;
    q->next = t;
}

int main()
{
    int A[] = {3, 5, 10, 15, 17};
    create(A, 5);
    display(first);
    insertSort(7);
    display(first);
    return 0;
}
