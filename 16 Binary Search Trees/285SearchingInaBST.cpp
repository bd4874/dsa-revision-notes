// Author: REET

/*
Let's have a BST?
          30
    15          50
10     20    40     60

Suppose we are searching for value 20.
Make a temproary pointer T point on root
node.
Check whether it is 20.
If not, the possibilities are as follows:
key element is greater:point T on right
key element is smaller:point T on left
In our case as 20 is smaller than 30 make
T point on 15.
Then keep repeating the above steps until
you the element is found.
Following this way 20 will be just found
in 3 comparison.

Maximum time taken to compare element and
find depends on the height of the tree
which varies from [log(n) <= h <= n]

Time taken for search = O(h) = O(log(n))

========RECURSIVE SEARCH FUNCTION========
rSearch(Node* t, int key) {
    if (t == NULL)
        return NULL;
    if (key == t->data)
        return t;
    else if (key < t->data)
        return rSearch(t->lchild, key);
    else
        return rSearch(t->rchild, key);
}
This is a tail recursion.
If a tail recursive function is converted
into iterative function definitely we
don't require a stack for that.

========ITERATIVE SEARCH FUNCTION========
Node* Search(Node* t, int key) {
    while (t) {
        if (t->data == key)
            return t;
        if (t->data > key)
            t = t->lchild;
        if (t->data < key)
            t = t->rchild;
    }
    return NULL;
}
*/
