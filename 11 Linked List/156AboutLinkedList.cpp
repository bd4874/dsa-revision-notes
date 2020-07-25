/*
Nodes are created inside heap so to create
a node we need to define a pointer first.
struct Node {
    int data;
    struct Node *next;
}
struct Node *p;
p = (struct Node *)malloc(sizeof(struct Node)); -> In C
p = new Node; -> In C++
*/