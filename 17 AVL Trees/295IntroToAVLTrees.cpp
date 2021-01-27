/*
AVL trees are height balanced binary
search trees.
It is balanced using balance factor 
which is height of left subtree minus
height of right subtree.
    B.F. = hl-hr
Valid balance factors are {-1,0,1}
If the balance factor is greater than 1
then it is imbalanced node.
Therefore, |hl-hr|<=1 for balanced node
and |hl-hr|>1 for imbalanced node
To balance a tree, we need to perform
rotations.
Keep in mind, that we need to count
height in order to find balance factors
not the total number of nodes.
      15
    1     8
        4    28
           24   70
In this example, bf[15] = 1-3=-2
Check the height, not the nodes.
*/