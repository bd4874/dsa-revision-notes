// Author: REET

/*
In a Binary Search Tree(BST) all the
elements in the left subtree is smaller 
than the parent node and all the 
elements in the right subtree are 
greater.

This is useful while searching a
particular element in the tree.
Also the operation follows the Binary
Search Algorithm that's why known as 
Binary Search Tree.

How is it useful while searching?
          30
    15          50
10     20    40     60
Suppose I'm searching for 40.

Steps Involved:
Check root node. Is that 40? No!
Visit the right note of root as
the key element 40 is greater than 30.
Is that 40? No!
Then check the right child, because 50
is less than 40.
Voila! Element is found.
This operation is similar to Binary 
Search Algorithm.

===========PROPERTIES OF BST===========
1. No duplicates allowed.
2. If you take Inorder Traversal,you'll
   get the elements in sorted order.
   e.g.           30
           15          50
       10     20    40     60
   Inorder: 10 15 20 30 40 50 60

3. Different shape tree that can be 
   generated having same inorder = 
   2nCn/(n+1)

In one shape the key element can only 
be filled in one way otherwise inorder
traversal won't have same result.
*/