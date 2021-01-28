/*
The very first condition for a heap is
to be complete binary tree.
There should not be any blank spaces in
between.
There are two types of heap:
Max Heap: Every node is having value
greater than all its descendants.
e.g.
        30
    20      15
  5    10 12   6
Min Heap: Every node is having value
lesser than all its descendants.
e.g.
        5
    15     15
  20  25 30  18
Height of heap will not increase
unnecessarily. It'll be always logN
only as it is a complete binary tree.
We use 1D array[1-index based] to store
the heap elements.
| 30 | 20 | 15 | 5 | 10 | 12 | 6 |
| 1  | 2  | 3  | 4 | 5  | 6  | 7 |
Node at index i
Left child at 2*i
Right child at 2*i+1
    
*/