// Author: REET

/*
When we convert some recursive approach
to iterative we may need a stack but it's
not always necessary.

=======INORDER ITERATIVE APPROACH=======

#Pseudo Program
void Inorder(Node *t)
{
    struct Stack st;
    while (t != NULL || isEmpty(st))
    {
        if (t != NULL)
        {
            push(&st, t);
            t = t->rchild;
        }
        else
        {
            t = pop(&st);
            cout << t->data << endl;
            t = t->rchild;
        }
    }
}
*/