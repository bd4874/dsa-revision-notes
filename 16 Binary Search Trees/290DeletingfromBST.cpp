// Author: REET

/*
In order to delete an element from BST,
we first need to find that particular
element, then delete that node.
Number of childrens determine the
procedure to delete. These are some of
the possible scenarios.
1.If node is a leaf node: Simply delete
that node.
2.If node is having one child node:
Node will be deleted and child element
will take it's place.
3.If node is root node: Node will be
deleted and either inorder successor or 
predecessor will take its place.
Inorder successor is leftmost child of
right subtree and inorder predecessor
is rightmost child of left subtree.
There is no need to perform Inorder
traversal.
Also if the inorder predecessor or
successor is not a leaf node then we
may have to perform multiple 
modifications.
Maximum time taken for deletion depends
on the height which is (logN).
And maximum modifications that needs to
be done in order to delete a node is 
also (logN).
*/