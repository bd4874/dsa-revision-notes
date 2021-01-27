/*
==============LL ROTATION==============
->Initial
        30
    20
B.F. of node 20 is 0 and node 30 is 1.
->After Inserting 10
        30
    20
 10
B.F. of node 30 is 2 now.
We call it LL imbalance due to position
of 10 which is left of left.
To solve the imbalanced B.F. rotate the
tree around 20, pull 30 to the right
side assuming 20 as the pivot element.
->After performing LL Rotation
      20
    10   30
B.F. of all the nodes are 0 now.
==============RR ROTATION==============
->Initial
    10
        20
B.F. of node 20 is 0 and node 10 is 1.
->After Inserting 30
    10
        20
            30
B.F. of node 10 is 2 now.
We call it RR imbalance due to position
of 30 which is right of right.
To solve the imbalanced B.F. rotate the
tree around 20, pull 10 to the left
side assuming 20 as the pivot element.
->After performing RR Rotation
      20
    10   30
B.F. of all the nodes are 0 now.
==============LR ROTATION==============
->Initial
    30
10
B.F. of node 10 is 0 and node 30 is 1.
->After Inserting 20
    30
10
    20
B.F. of node 30 is 2 now.
We call it LR imbalance due to position
of 20 which is right of left.
To solve the imbalanced B.F., first 
pull 10 to the left side. So the tree
will be like,
       30
    20
10      
Then perform LL rotation
->After performing LR Rotation
      20
    10   30
B.F. of all the nodes are 0 now.
This is a kind of double rotation as
two steps are getting performed.
==============RL ROTATION==============
->Initial
10
   30
B.F. of node 10 is 1 and node 30 is 0.
->After Inserting 20
10
   30
20
B.F. of node 10 is 2 now.
We call it RL imbalance due to position
of 20 which is left of right.
To solve the imbalanced B.F., first 
pull 30 to the right side. So the tree
will be like,
10
   20
      30    
Then perform RR rotation
->After performing LR Rotation
      20
    10   30
B.F. of all the nodes are 0 now.
This is also a kind of double rotation
as two steps are getting performed.
===============WHY AVL?================
For, n=3, 5 different shaped BSTs can
be generated. We can find that using
Catalan number, 2nCn/(n+1) where height
of only one of the tree is two and that
tree is balanced too.
i.e.  20
    10  30
So these different rotations helps us
to get the balanced tree, out of all 
the possible shaped BST.
*/