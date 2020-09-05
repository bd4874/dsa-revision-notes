// Author: REET

/*
void Insert(Node* t, int data) {
    Node* prev;
    while (t) {
        prev = t;
        if (data == t->data)
            cout << "Sorry but, duplicates can't be inserted" << endl;
        if (data < t->data)
            t = t->lchild;
        if (data < t->data)
            t = t->rchild;
    }
    Node newNode = new Node();
    newNode->lchild = NULL;
    newNode->rchild = NULL;
    newNode->data = data;
    if (data < r->data)
        r->lchild = newNode;
    else
        r->rchild = newNode;
}

Time Complexity: O(log(n))
*/

