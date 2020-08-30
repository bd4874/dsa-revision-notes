// Author: REET

/*
When we convert some recursive approach
to iterative we may need a stack but it's
not always necessary.

=======POSTORDER ITERATIVE APPROACH=======

#Pseudo Program
void Postorder(Node *t)
{
    struct Stack st;
    long int temp;
    while (t != NULL || isEmpty(st))
    {
        if (t != NULL)
        {
            push(&st, t);
            t = t->rchild;
        }
        else
        {
            temp = pop(&st);
            if (temp > 0)
            {
                push(&st, -temp);
                t = ((Node *)temp)->rchild;
            }
            else
            {
                cout << ((Node *)temp)->data;
                t = NULL;
            }
        }
    }
}
*/
