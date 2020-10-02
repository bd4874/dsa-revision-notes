// Author: REET

/*
For removing collisions, chaining is one
of the method and it comes under open
hashing.
================INSERTING================
This is implemented using array of 
pointers pointing to a linked list node.
So whenever there is a collision we
create a new node and link it with the
previously node.
Also the keys in the linked list must be
inserted in the sorted order. So while
searching it is easy to search.
There is no limit of size as it can 
expand dynamically upto any size. 

================SEARCHING================
Go to the index provided by the hash
function. Next search through the linked
list for the key.
Element may be found in the first
comparison or it may be found in some
comparison or in worst case upto last
node of the linked list associated with
that key.
The benefit of keeping the element is
sorted array comes to play while 
searching. Suppose we have to find 65
in linked list.

================ANALYSIS=================
Lets suppose there are 100 elements and
the size of the hash table is 10.
Loading Factor(Lambda) = n/hashTablesize
    L.F = 10
By loading factor we assume that 10
elements are present in every linked list
associated with 10 different pointers
pointing to 10 different linked lists.

Average Successful Search Time:
    t = 1 + lambda/2
    where 1 is for resolving hash fn.

Average Unsuccessful Search Time:
    t = 1 + lambda

================DELETING=================
It's so simple just search for that key
and delete the associated node.

NOTE: Select a hash function which helps
in uniformly distribution of all the
elements. So that the concept of loading
factor satisfy.
If you are not selecting a proper hash
function => you don't know hashing. XD
*/