// Author: REET

/*
In a Binary Search Tree(BST) all the
elements in the left subtree is smaller 
than the node and all the elements in the
right subtree are greater than the node.

This is useful while searching a
particular element in the tree.
Also the operation follows the Binary
Search Algorithm that's why known as 
Binary Search Tree.

How is it useful while searching?
          30
    15          50
10     20    40     60
Suppose I'm searching for 40 check root
node. Is that 40? If yes, element found.
No it's lesser that 40(Let's suppose 30).
Then obviously the element 40 is in the
right subtree.
Now check the root node of the right side
subtree.Is that 40? If yes, element found
else if it it greater than 40 then 40
must be present on the left side else on
the right side if the root element is
smaller than 40.
This operation is similar to Binary 
Search Algorithm.

============PROPERTIES OF BST============
1. No duplicates allowed.
2. If you take Inorder Traversal, you'll
   get the element in sorted order.
   e.g.           30
            15          50
        10     20    40     60
   Inorder Traversal:10 15 20 30 40 50 60
3. No. of BST for n nodes = 2nCn/(n+1)
*/