// Author: REET

/*
When we convert some recursive approach
to iterative we may need a stack but it's
not always necessary.

=======PREORDER ITERATIVE APPROACH=======
Create a stack.
Print root data.
Push the addess of root node in the stack
Move the pointer to the left child.
Print the data.
Push the addess of the node in the stack.
Move the pointer to the left child.
Print the data.
Now pointer became NULL. But the stack is
not empty.
Pop out the address from the stack go to
that node and then go to the right child
if it is also NULL then pop out again and
make t point on that node and go to right
child.
Keep doing it iteratively until the stack
is empty as well as pointer is NULL.

#Pseudo Program
void Preorder(Node *t)
{
    struct Stack st;
    while (t != NULL || isEmpty(st))
    {
        if (t != NULL)
        {
            cout << t->data << endl;
            push(&st, t);
            t = t->rchild;
        }
        else
        {
            t = pop(&st);
            t = t->rchild;
        }
    }
}
*/