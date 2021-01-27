/*
Some more examples of AVL rotations,
Example I:
          A
         / \
        B   Ar
       / \
      /   Br
     C
    / \
  Cl   Cr
Here B.F. of Node A is 2.
Rotations are always performed on only
three nodes. Here we need to perform
LL rotation in order to balance the
tree.
->After Performing LL Rotation
       B
     /   \
    C     A
   / \   / \
  Cl Cr Br Ar

Example II:
           30
         /    \
        20     40
       /  \     \
      10   25    50
     / \    \
    5  15    28
   /
  4  
Here B.F. of Node 30 is 2.
To balance the tree, we need to first
analyse which rotation does it need.
For that just check three nodes 
starting from 30, ignore rest of the
nodes.
Here we can perform LL rotation in 
order to balance the tree.
->After Performing LL Rotation
         20
       /    \
      10     30
     /  \   /  \
    5   15 25   40
   /         \    \
  4           28   50
Don't change position of 28 w.r.t 25,
just change the position of 25.
All nodes are balanced now.

Example III:
       A
     /   \
    B     Ar
   / \
  Bl  C
     / \
    Cl Cr
Again the B.F. of node A is 2.
Here we need to perform LR rotation.
->After Performing LR Rotation
        C
     /     \
    B       A
   / \     / \
  Bl  Cl  Cr Ar

Example IV:
        40
       /  \
      20   50
     / \    \
    10  30  60
   /   /  \
  5   25   35
        \
        27
Again, the B.F. of node 40 is 2. Here
we need to perform LR rotation.
->After Performing LR Rotation
         30 
       /    \
      20     40
     / \    /  \
    10  25 35  50
   /     \       \
  5      27      60
*/