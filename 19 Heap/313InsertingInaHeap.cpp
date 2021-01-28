/*
========INSERTION IN A MAX HEAP========
Let's take a heap as,
        30
    20      15
  5    10 12   6

Corresponding array for the heap
| 30 | 20 | 15 | 5 | 10 | 12 | 6 |
| 1  | 2  | 3  | 4 | 5  | 6  | 7 |

Suppose we have to insert value 40 in
the heap. 40 is greater than the root
node value(30). We can't replace the
root value with 40 and then keep 
pushing the remaining values one level
down as we need to maintain a complete
binary tree.
So a better approach is something like
this,
insert value at next free space 
avaialable in the array.

| 30 | 20 | 15 | 5 | 10 | 12 | 6 | 40 |
| 1  | 2  | 3  | 4 | 5  | 6  | 7 | 8  |

Now just compare the value with its
parent node, if the parent node value
is smaller swap the elements. Keep 
repeating until you get the parent node
value smaller than the current node.
This way element will move to its 
appropriate place.
Step I:
         30
     20      15
   5    10 12   6
40

Step II:
         30
     20      15
  40    10 12   6
5

Step III:
       30
    40      15
 20    10 12   6
5

Step IV:
       40
    30      15
  20   10 12   6
5
Time complextiy will depend on the 
height of the tree which can be max
O(logN). 

*/