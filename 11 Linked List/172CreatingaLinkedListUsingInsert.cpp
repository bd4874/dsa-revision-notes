// Combination of Previous two programs
// Author: REET

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} * first;

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

void insert(int data, int position)
{
    struct Node *n, *p;
    if (position == 0)
    {
        n = new Node;
        n->data = data;
        n->next = first;
        first = n;
    }
    else if (position > 1)
    {
        p = first;
        for (int i = 0; i < (position - 1) && p; i++)
        {
            p = p->next;
        }
        if (p)
        {
            n = new Node;
            n->data = data;
            n->next = p->next;
            p->next = n;
        }
    }
}

int main()
{
    insert(8, 0);
    insert(3, 1);
    insert(6, 2);
    insert(5, 0);
    insert(9, 3);
    display(first);
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Node Elements are: 3 5 17 10 15 
Node Elements are: 3 5 17 10 28 15 
*/