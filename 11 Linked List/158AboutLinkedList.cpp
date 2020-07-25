// Author: REET

/*
LL is a collection of node where each
node contains data and a pointer to next
node.

==========WHY LINKED LIST(LL)==========
We are the programmers, but it's up to
the user to decide the number of element 
he/she wants to store in the array.
But as a programmer, we need to declare
the size of an array at compile time.
So in this type of case where size of
array is not known to us. LL comes handy
Array elements are contiguous,but LL not.
Conclusion-:
For variable data structure, which can
grow or reduce we use LL.

==SYNTAX FOR DEFINING A NODE STRUCTURE==
For C:
struct Node {
    int data;
    struct Node *next;
}
For C++ we can use class also.

=======SYNTAX FOR CREATING A NODE=======
struct Node *p; -> This pointer is in the
stack.
Below structures are creaetd in heap.
p = (struct Node *)
malloc(sizeof(struct Node)); -> In C
p = new Node; -> In C++
This type of structure is known as self-
referential structure.

==========TO ACCESS NODE MEMBER==========
p->data;
p->next;

=======SOME EXAMPLES OF ASSIGNMENT=======
Suppose a node is defined in heap memory
with data value as 8 and address of the
next node as 210.
p* is a pointer which is pointing to the
first node of the LL.
-----------------------------------------
q=p       | now q will point to first   
          | node also.                  
q=p->next | q will point to the next node                       
p=p->next | p will point to the next node                           
----------------------------------------
*/  